/* Copyright (c) 2016 Dovecot Oy, see the included COPYING file */

#include "lib.h"
#include "buffer.h"
#include "str.h"
#include "password-scheme.h"
#include "safe-memset.h"
#include "base64.h"
#include "hex-binary.h"
#include "randgen.h"
#include "password-scheme-plugin.h"

static void
scheme_generate(const char *plaintext, const char *user,
		const unsigned char **raw_password_r, size_t *size_r)
{
	*raw_password_r = "encoded password here";
	*size_r = strlen(*raw_password_r);
}

static int
scheme_verify(const char *plaintext, const char *user,
	      const unsigned char *raw_password, size_t size,
	      const char **error_r)
{
	/* return 0 if plaintext password matches with raw_password (encoded password) */
	return -1;
}

const struct password_scheme password_scheme = {
	"MYSCHEME",
	PW_ENCODING_NONE,
	0,
	scheme_verify,
	scheme_generate
};

void password_scheme_plugin_init(struct module *module)
{
	password_scheme_register(&password_scheme);
}

void password_scheme_plugin_deinit(void)
{
	password_scheme_unregister(&password_scheme);
}

const char *password_scheme_version = DOVECOT_ABI_VERSION;
