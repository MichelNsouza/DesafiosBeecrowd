<?php
$valor = trim(fgets(STDIN));
$conta = [1,2,3];
for($i = 1; $i <= $valor; $i++){
    
    echo "{$conta[0]} {$conta[1]} {$conta[2]} PUM\n";
    $conta[0]+= 4;
    $conta[1]+= 4;
    $conta[2]+= 4; 
}


?>
