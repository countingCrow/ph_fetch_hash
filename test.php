<?php
$reflect_ext = new ReflectionExtension('pHash');
print_r($reflect_ext->getFunctions());
// should contains
// [ph_fetch_hash] => ReflectionFunction Object
?>
