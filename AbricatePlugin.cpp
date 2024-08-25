#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "AbricatePlugin.h"

void AbricatePlugin::input(std::string file) {
   inputfile = file;
}

void AbricatePlugin::run() {}

void AbricatePlugin::output(std::string file) {
       	std::string outputfile = file;
	std::string myCommand = "abricate "+inputfile+" >& "+file;
 std::cout << myCommand << std::endl;
system(myCommand.c_str());
}

PluginProxy<AbricatePlugin> AbricatePluginProxy = PluginProxy<AbricatePlugin>("Abricate", PluginManager::getInstance());
