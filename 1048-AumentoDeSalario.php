<?php

$s = fgets(STDIN);

if ($s <= 400.00 ) {
    $p = 15/100;
} elseif ($s >= 400.01 && $s <= 800.00) {
    $p = 12/100;
} elseif ($s >= 800.01 && $s <= 1200.00) {
    $p = 10/100;
} elseif ($s >= 1200.01 && $s <= 2000.00) {
    $p = 7/100;
} elseif ($s > 2000.00) {
    $p = 4/100;
}

$r = number_format($s * $p, 2, '.', '');
$novo_s = number_format(($s + $r), 2, '.', '');

echo "Novo salario: {$novo_s}\nReajuste ganho: {$r}\nEm percentual: " . ($p * 100) . " %\n";

?>
