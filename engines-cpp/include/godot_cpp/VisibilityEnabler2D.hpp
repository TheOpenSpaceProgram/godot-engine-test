#ifndef VISIBILITYENABLER2D_H
#define VISIBILITYENABLER2D_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "VisibilityNotifier2D.hpp"


namespace godot {

class Object;


class GD_CPP_BINDING_API VisibilityEnabler2D : public VisibilityNotifier2D {
public:

	void _init();

	const static int ENABLER_FREEZE_BODIES = 1;
	const static int ENABLER_MAX = 6;
	const static int ENABLER_PARENT_FIXED_PROCESS = 4;
	const static int ENABLER_PARENT_PROCESS = 3;
	const static int ENABLER_PAUSE_ANIMATED_SPRITES = 5;
	const static int ENABLER_PAUSE_ANIMATIONS = 0;
	const static int ENABLER_PAUSE_PARTICLES = 2;


	void set_enabler(const int enabler, const bool enabled);
	bool is_enabler_enabled(const int enabler) const;
	void _node_removed(const Object *arg0);
};

}
#endif
