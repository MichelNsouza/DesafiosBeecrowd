<?php
    $valor1 = trim(fgets(STDIN));
    $valor2 = trim(fgets(STDIN));  


if($valor1 < $valor2){
  $menor = $valor1;
  $maior = $valor2;
}else{
  $menor = $valor2;
  $maior = $valor1;
}

$soma = 0;
  
for($i = $menor; $i <= $maior; $i++ ){

  if($i % 13 != 0){
    $soma = $soma + $i;
  }
  
}
echo $soma.PHP_EOL;
?>
