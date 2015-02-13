
#include "runtime.h"
#include "cgocall.h"

#pragma dataflag 16
static void *cgocall = runtime·cgocall;
#pragma dataflag 16
void *·_cgo_runtime_cgocall = &cgocall;


#pragma dynimport _wrap_new_neural_network_toolset _wrap_new_neural_network_toolset ""
#pragma cgo_import_static _wrap_new_neural_network_toolset
extern void _wrap_new_neural_network_toolset(void*);
uintptr ·_wrap_new_neural_network_toolset = (uintptr)_wrap_new_neural_network_toolset;




#pragma dynimport _wrap_delete_neural_network_toolset _wrap_delete_neural_network_toolset ""
#pragma cgo_import_static _wrap_delete_neural_network_toolset
extern void _wrap_delete_neural_network_toolset(void*);
uintptr ·_wrap_delete_neural_network_toolset = (uintptr)_wrap_delete_neural_network_toolset;




#pragma dynimport _wrap_neural_network_toolset_parse _wrap_neural_network_toolset_parse ""
#pragma cgo_import_static _wrap_neural_network_toolset_parse
extern void _wrap_neural_network_toolset_parse(void*);
uintptr ·_wrap_neural_network_toolset_parse = (uintptr)_wrap_neural_network_toolset_parse;




#pragma dynimport _wrap_neural_network_toolset_get_action _wrap_neural_network_toolset_get_action ""
#pragma cgo_import_static _wrap_neural_network_toolset_get_action
extern void _wrap_neural_network_toolset_get_action(void*);
uintptr ·_wrap_neural_network_toolset_get_action = (uintptr)_wrap_neural_network_toolset_get_action;




#pragma dynimport _wrap_neural_network_toolset_do_action _wrap_neural_network_toolset_do_action ""
#pragma cgo_import_static _wrap_neural_network_toolset_do_action
extern void _wrap_neural_network_toolset_do_action(void*);
uintptr ·_wrap_neural_network_toolset_do_action = (uintptr)_wrap_neural_network_toolset_do_action;




#pragma dynimport _wrap_plain_init _wrap_plain_init ""
#pragma cgo_import_static _wrap_plain_init
extern void _wrap_plain_init(void*);
uintptr ·_wrap_plain_init = (uintptr)_wrap_plain_init;




#pragma dynimport _wrap_nnforge_init _wrap_nnforge_init ""
#pragma cgo_import_static _wrap_nnforge_init
extern void _wrap_nnforge_init(void*);
uintptr ·_wrap_nnforge_init = (uintptr)_wrap_nnforge_init;




