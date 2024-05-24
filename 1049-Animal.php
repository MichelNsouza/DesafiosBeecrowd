<?php
$a = trim(fgets(STDIN));
$b = trim(fgets(STDIN));
$c = trim(fgets(STDIN));

$animais = [
    "vertebrado" => [
        "ave" => [
            "carnivoro" => "aguia",
            "onivoro" => "pomba"
        ],
        "mamifero" => [
            "onivoro" => "homem",
            "herbivoro" => "vaca"
        ]
    ],
    "invertebrado" => [
        "inseto" => [
            "hematofago" => "pulga",
            "herbivoro" => "lagarta"
        ],
        "anelideo" => [
            "hematofago" => "sanguessuga",
            "onivoro" => "minhoca"
        ]
    ]
];


$animal = $animais[$a][$b][$c];

echo "$animal\n";

?>
