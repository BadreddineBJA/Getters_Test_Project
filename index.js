// run `node index.js` in the terminal
const fs = require('fs');
let select = require('@gizt/selector');
let hbsInstance = require('handlebars');
require('handlebars-helpers')({ handlebars: hbsInstance });

//#region common Helpers
hbsInstance.registerHelper('assign', function (varName, varValue, options) {
  if (!options.data.root) {
    options.data.root = {};
  }
  options.data.root[varName] = varValue;
});

hbsInstance.registerHelper('addConfig', function (str) {
  if (str && typeof str === 'string') {
    return '_' + str;
  }
  return '';
});

hbsInstance.registerHelper('addConfigUC', function (str) {
  if (str && typeof str === 'string') {
    return '_' + str.toUpperCase();
  }
  return '';
});

hbsInstance.registerHelper('addConfigLC', function (str) {
  if (str && typeof str === 'string') {
    return '_' + str.toLowerCase();
  }
  return '';
});

hbsInstance.registerHelper('lowercase', function (str) {
  if (str && typeof str === 'string') {
    return str.toLowerCase();
  }
  return '';
});

hbsInstance.registerHelper('exec', (func) => {
  if (typeof func == 'function') func = func.call(this);
  return func;
});

hbsInstance.registerHelper('toJSON', function (obj) {
  return JSON.stringify(obj, null, 3);
});

class getContext {
  currentContext;
  constructor(HWresource, data) {
    this.currentContext = select('resources.'.concat(HWresource), data);
  }

  getResource() {
    return select('resource', this.currentContext);
  }

  getConfigs() {
    return select('configs', this.currentContext);
  }

  getContext() {
    return this.currentContext;
  }

  getResourceAPI() {
    return {
      ContextAPI: {
        getConfigs: this.getConfigs.bind(this),
        getContext: this.getContext.bind(this),
        getResource: this.getResource.bind(this),
      },
    };
  }
}

let firstTemplate = fs.readFileSync('stm32_crc_template.c.hbs', {
  encoding: 'utf8',
});

let secondTemplate = fs.readFileSync('stm32_crc_template.h.hbs', {
  encoding: 'utf8',
});

let data = fs.readFileSync('data.json', {
  encoding: 'utf8',
});

const getContextInstance = new getContext(
  'crc',
  JSON.parse(data)
).getResourceAPI();

const templateDelegate_func = hbsInstance.compile(firstTemplate);
const renderedOutPut = templateDelegate_func(getContextInstance);

const templateDelegate_func1 = hbsInstance.compile(secondTemplate);
const renderedOutPut1 = templateDelegate_func1(getContextInstance);

fs.writeFileSync('./output.c', renderedOutPut);
fs.writeFileSync('./output.h', renderedOutPut1);
