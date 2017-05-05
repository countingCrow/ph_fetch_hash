// insert the following before PHP_FUNCTION(ph_texthash);
#if HAVE_IMAGE_HASH
PHP_FUNCTION(ph_fetch_hash);
#if (PHP_MAJOR_VERSION >= 5)
ZEND_BEGIN_ARG_INFO_EX(ph_fetch_hash_arg_info, ZEND_SEND_BY_VAL, ZEND_RETURN_VALUE, 1)
  ZEND_ARG_INFO(0, h1)
ZEND_END_ARG_INFO()
#else /* PHP 4.x */
#define ph_fetch_hash_arg_info NULL
#endif
#endif /* HAVE_IMAGE_HASH */
