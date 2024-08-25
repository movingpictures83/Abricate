#ifndef AbricatePLUGIN_H
#define AbricatePLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include "Tool.h"
#include <string>

class AbricatePlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "Abricate";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;
};

#endif
