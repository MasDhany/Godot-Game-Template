// Main Header

// External Dependencies
#include <core/godot.hpp>

// Internal Dependencies

extern "C" {
	void
	GDN_EXPORT 
	godot_nativescript_init(
		void* handle
	)
	{
		gd::godot::nativescript_init(handle);
	}

	void 
	GDN_EXPORT 
	godot_gdnative_init(
		godot_gdnative_init_options* o
	)
	{
		gd::godot::gdnative_init(o);
	}

	void 
	GDN_EXPORT 
	godot_gdnative_terminate(
		godot_gdnative_terminate_options* o
	)
	{
		gd::godot::gdnative_terminate(o);
	}
}