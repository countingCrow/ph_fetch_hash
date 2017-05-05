// insert following after PHP_FE(ph_dct_imagehash    , ph_dct_imagehash_arg_info)
	PHP_FE(ph_fetch_hash       , ph_fetch_hash_arg_info)

// insert following after /* }}} ph_dct_imagehash */
PHP_FUNCTION(ph_fetch_hash)
{
  zval * h1_res = NULL;
  int h1_resid = -1;
  ulong64 * h1;

  if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "r", &h1_res) == FAILURE) {
    return;
  }
  if ((h1 = (ulong64 *)zend_fetch_resource2(Z_RES_P(h1_res), "ph_image_hash", h1_resid, le_ph_image_hash)) == NULL) {
    RETURN_FALSE;
  }
  unsigned long long int ih1 = *h1;
  
  RETURN_LONG(ih1);
}
