<?php

$gremio = 0;
$inter = 0;
$grenais = 0;
$empates = 0;

$repete = 1;
while($repete === 1){

    $placar = trim(fgets(STDIN));

    $grenais++;

    $placar = explode(" ", $placar);

    if ($placar[0] > $placar[1]){
      $inter++;
    }else if($placar[0] < $placar[1]){
      $gremio++;
    }else{
      $empates++;
    } 

    echo "Novo grenal (1-sim 2-nao)\n";
    $repete2 = (INT)trim(fgets(STDIN))  ; 
    if($repete2 === 2){
        $repete = 0;
    }
}

  if ($inter > $gremio){
    $ganhou = 'Inter venceu mais';
  }else if($inter < $gremio){
    $ganhou = 'Gremio venceu mais';
  }else{
    $ganhou = 'Nao houve vencedor';
  }



echo "{$grenais} grenais\nInter:{$inter}\nGremio:{$gremio}\nEmpates:{$empates}\n{$ganhou}\n";

?>
