<?php

function crow_count_bit_64($int64) {
  $result = $int64 - ($int64 >> 1 & 0x5555555555555555);
  $result = ($result >> 2 & 0x3333333333333333) + ($result & 0x3333333333333333);
  $result = ($result >> 4) + $result & 0x0f0f0f0f0f0f0f0f;
  $result = ($result >> 8) + $result & 0x00ff00ff00ff00ff;
  $result = ($result >> 16) + $result & 0x0000ffff0000ffff;
  $result = ($result >> 32) + $result & 0x00000000ffffffff;
  return $result;
}

function crow_phash_distance($int64_a, $int64_b) {
  return crow_count_bit_64($int64_a ^ $int64_b);
}

?>
