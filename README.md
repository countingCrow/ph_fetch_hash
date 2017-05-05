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

# note
- 11.0-RELEASE-p8; PHP 7.0.15; pHash-0.9.6; php-pHash-0.9.6_1;
- php-pHash-0.9.6_1 seem not supporting png, try convert to jpg first
