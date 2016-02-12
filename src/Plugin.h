
#ifndef BRO_PLUGIN_NCSA_METERPRETER
#define BRO_PLUGIN_NCSA_METERPRETER

#include <plugin/Plugin.h>

namespace plugin {
namespace NCSA_Meterpreter {

class Plugin : public ::plugin::Plugin
{
protected:
	// Overridden from plugin::Plugin.
	virtual plugin::Configuration Configure();
};

extern Plugin plugin;

}
}

#endif
