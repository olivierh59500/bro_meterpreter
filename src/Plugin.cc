
#include "Plugin.h"

namespace plugin { namespace NCSA_Meterpreter { Plugin plugin; } }

using namespace plugin::NCSA_Meterpreter;

plugin::Configuration Plugin::Configure()
	{
	plugin::Configuration config;
	config.name = "NCSA::Meterpreter";
	config.description = "<Insert description>";
	config.version.major = 0;
	config.version.minor = 1;
	return config;
	}
