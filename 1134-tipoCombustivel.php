<?php
$repete = 0;
$gasolina = 0;
$alcool = 0;
$diesel = 0;

while($repete != 4){

  $valor1 = trim(fgets(STDIN));

  switch ($valor1) {
      case 1:
          $alcool++;
          break;
      case 2:
          $gasolina++;
          break;
      case 3:
          $diesel++;
          break;
      case 4:
        $repete = 4;
        break;
  }
  
}

echo "MUITO OBRIGADO\nAlcool: {$alcool}\nGasolina: {$gasolina}\nDiesel: {$diesel}\n";
  
?>
