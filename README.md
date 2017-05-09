# ph_fetch_hash
Since I have never learned how to patch freebsd ports nor making php extensions, this is just a work around for me to fetch hash values out from php resources.

# requirements
PHP > 7

# install
1. make make make and build all the way of original php-pHash
2. deinstall and clean php-pHash
3. make test, ctrl+c to break when it starts to check for compiler environment
4. modify work/pHash-0.9.6/bindings/php/php_pHash.h
5. modify work/pHash-0.9.6/bindings/php/pHash.cpp
6. make install again

# usage
int ph_fetch_hash ( resource $phash_resource )

# troubleshooting
- directly assign url for ph_dct_hash could silently failed (always getting 0 as hash value) when using it at cron script; one possibility is that missing environment variable path leading to curl will make 'it' (maybe CImg?) failed to fetch image back from internet
- the problem above could also happened when serving web pages by apache24, try create a file at /usr/local/etc/apache24/envvars.d/path.env with PATH=$PATH:/usr/local/bin; inside and restart apache

# note
- 11.0-RELEASE-p8; PHP 7.0.15; pHash-0.9.6; php-pHash-0.9.6_1;
- php-pHash-0.9.6_1 seem not supporting png, try convert to jpg first
- MySQL (SIGNED) BIGINT would be capable to store the return value
- MySQL function BIT_COUNT could be handy to get hamming distance (http://stackoverflow.com/a/21058895)
- if need to get hamming distance in php could use crow_count_bit_64, see count_bit.php
