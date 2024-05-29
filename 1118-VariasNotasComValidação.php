<?php
$repete = 1;
while($repete === 1){
    
    for($i = 0; $i < 2; ){
        
        $nota[$i] = trim(fgets(STDIN));
        
        if($nota[$i] >= 0 && $nota[$i] <= 10){
            $i++;
        }else{
            echo "nota invalida\n";
        }
    }
    
    $media = ($nota[0] + $nota[1]) / 2;
    $media = number_format($media, 2);
    echo "media = {$media}\n";

    $repete2 = 0;
    while($repete2 != 2 && $repete2 != 1){
        
        echo "novo calculo (1-sim 2-nao)\n";
        $repete2 = (INT)trim(fgets(STDIN))  ; 
        if($repete2 === 2){
            $repete = 0;
        }
    }
}
?>