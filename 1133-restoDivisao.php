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

for($i = $menor; $i < $maior; $i++ ){

  if($i % 5 === 2 || $i % 5 === 3 ){
    echo "$i\n";
  }
}
?>
