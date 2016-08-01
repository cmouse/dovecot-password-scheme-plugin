#ifndef PASSWORD_SCHEME_PLUGIN_H
#define PASSWORD_SCHEME_PLUGIN_H

struct module;

void password_scheme_plugin_init(struct module *module);
void password_scheme_plugin_deinit(void);

#endif
