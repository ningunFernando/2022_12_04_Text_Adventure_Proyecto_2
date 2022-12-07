// 2022_12_04_Text_Adventure_Proyecto_2.cpp
// Fernando patiño
// Juego de aventura de texto donde la historia cambia dependiendo de las decicones de el jugador
//

#include <iostream>
#include <string>
#include <Windows.h>

std::string nombre, sexo;
int raza, dec, dec2, dec3;

void imprimir(std::string texto, int cont = 15) {
	char* text = new char[size(texto)];

	for (int i = 0; i < size(texto); i++)
	{
		text[i] = texto[i];
	}

	for (int i = 0; i < size(texto); i++)
	{
		std::cout << text[i];
		Sleep(cont);
	}
}
void title(std::string ent) {


	std::cout << R"( 
 _______  _______  _______  _______  _______   
(  ____ \(  ____ )(  ___  )(  ____ \(  ____ \  
| (    \/| (    )|| (   ) || (    \/| (    \/  
| (_____ | (____)|| (___) || |      | (__      
(_____  )|  _____)|  ___  || |      |  __)     
      ) || (      | (   ) || |      | (        
/\____) || )      | )   ( || (____/\| (____/\  
\_______)|/       |/     \|(_______/(_______/  
                                               )" << std::endl;
	Sleep(500);
	std::cout << R"( 
 _______  _______           _______  _______  ______   _______  _______  _______ 
(  ____ \(  ____ )|\     /|(  ____ \(  ___  )(  __  \ (  ____ \(  ____ )(  ____ \
| (    \/| (    )|| )   ( || (    \/| (   ) || (  \  )| (    \/| (    )|| (    \/
| |      | (____)|| |   | || (_____ | (___) || |   ) || (__    | (____)|| (_____ 
| |      |     __)| |   | |(_____  )|  ___  || |   | ||  __)   |     __)(_____  )
| |      | (\ (   | |   | |      ) || (   ) || |   ) || (      | (\ (         ) |
| (____/\| ) \ \__| (___) |/\____) || )   ( || (__/  )| (____/\| ) \ \__/\____) |
(_______/|/   \__/(_______)\_______)|/     \|(______/ (_______/|/   \__/\_______)
                                                                                 )" << std::endl;
	Sleep(500);

	std::cout << "||=========================================||" << std::endl;
	imprimir("||      PRESIONAR ENTER PARA EMPEZAR       ||\n");
	std::cout << "||=========================================||" << std::endl;

	std::getline(std::cin, ent);
	system("CLS");

	//CREACION DE PERSONAJE
	std::cout << "Ingrese nombre de tu personaje" << std::endl;
	std::cin >> nombre;

	std::cout << "Ingrese su raza" << std::endl;
	std::cout << R"( 1) Humano     2)Marciano

 3)Xanik       4)Hoda'al
)";
	std::cin >> dec;

	if (dec == 1) { raza = 0; }
	else if (dec == 2) { raza = 1; }
	else if (dec == 3) {raza = 2;}
	else if (dec == 4) { raza = 3; }
	else { std::cout << "Ingresa una opcion valida";  Sleep(1400); system("cls"); title(""); }

	std::cout << "ingresar sexo del personaje" << std::endl;
	std::cin >> sexo;

	//Animacion de creacion

	system("CLS");
	std::cout << "CREANDO PERSONAJE .\n";
	Sleep(1800);
	system("CLS");

	std::cout << "CREANDO PERSONAJE ..\n";
	Sleep(1800);
	system("CLS");

	std::cout << "CREANDO PERSONAJE ...\n";
	Sleep(1800);
	system("CLS");
}
void limpiar(float tiempo) {
	tiempo = tiempo * 777;
	Sleep(tiempo);
	system("cls");
}
void intro(){
	imprimir("25 de abril ", 35); Sleep(150); imprimir("año humano 2557 \n\n\n"), 65;
	Sleep(700);
	imprimir(" la humanidad habia alcanzado nuevas alturas. Los avances en tecnologia y ciencia les habian permitido explorar las profundidades del universo, donde descubrieron otras especies inteligentes", 35);
	Sleep(1000);
	imprimir(" Algunas de estas especies, como los Arcturianos y los Zorathianos, eran benevolas y acogian con agrado el contacto con los humanos, ", 35);
	Sleep(500);
	imprimir("mientras que otras, como los Kroll y los Ferengi, eran hostiles y veian a los humanos como una amenaza.\n\n", 35);
	imprimir("Pero a pesar de los desafios planteados por estas especies hostiles, ", 35);
	Sleep(500);
	imprimir("la humanidad siguio decidida a buscar relaciones pacificas con todas las demas especies inteligentes que encontro.", 28);
	Sleep(500);
	imprimir("Sabían que la cooperación y el entendimiento eran las claves para construir un futuro mejor para todos.", 40);
	std::cout << R"(     
						'
            *          .
          *       '
       *           *

   *   '      *
           *
                *
                       *
               *
                     *

         .                      .
         .                      ;
         :                  - --+- -
         !           .          !
         |        .             .
         |_         +
      ,  | `.
--- --+-<#>-+- ---  --  -
      `._|_,'
         T
         |
         !
         :         . : 
         .       *)";
	limpiar(8);

	imprimir("26 de abril ", 35); Sleep(150); imprimir("año humano 2557 \n\n\n"), 65;
	imprimir("Formaba parte de un equipo de diplomaticos enviados para establecer relaciones con una nueva especie recientemente descubierta. Llegamos a su planeta, deseosos de aprender más sobre ellos y de ofrecerles nuestra amistad.", 35);
	std::cout << R"( 
                     `. ___
                    __,' __`.                _..----....____
        __...--.'``;.   ,.   ;``--..__     .'    ,-._    _.-'
  _..-''-------'   `'   `'   `'     O ``-''._   (,;') _,'
,'________________                          \`-._`-','
 `._              ```````````------...___   '-.._'-:
    ```--.._      ,.                     ````--...__\-.
            `.--. `-`                       ____    |  |`
              `. `.                       ,'`````.  ;  ;`
                `._`.        __________   `.      \'__/`
                   `-:._____/______/___/____`.     \  `
                               |       `._    `.    \
                               `._________`-.   `.   `.___
                                                  `------'`)";
	limpiar(9);
	imprimir("Pero al salir de nuestra nave, nos encontramos con hostilidad. La nueva especie, los xenones, odiaban profundamente a los humanos y nos atacaron sin previo aviso...", 35);
	Sleep(700);
	imprimir("Contraatacamos, usando nuestra tecnologia superior para defendernos.\n\nPero los xenones eran implacables, y pronto nos vimos superados en numero e inferioridad.", 55);
	imprimir("Sabia que teníamos que retirarnos si queríamos sobrevivir. ", 45);
	imprimir("Pero al mirar a mi alrededor, me di cuenta de que no todos los miembros de mi equipo iban a sobrevivir. Algunos ya estaban heridos y otros estaban atrapados y no podían moverse.", 35);
	limpiar(5);
	imprimir("Tuve que tomar una decision. Los dejo atrás y me salvo yo, o me quedo e intento ayudarles, aunque eso signifique arriesgar mi propia vida? ", 35);
	Sleep(600);
	imprimir("El destino de la humanidad y nuestra mision de establecer la paz con los xenones pende de un hilo.", 35);
	std::cout << std::endl;

};
void huida() {
	imprimir("no lo soportaste y decidiste huir, ", 35); Sleep(666); imprimir("pero... \n\nTus soldados estan ahora bastante enojados. dejate a sus amigos y hasta parejas morir aho por tu cobardia", 35);
	Sleep(600);
	imprimir("Ahora que haras? lo que cometiste fue traicion, y siendo un embajador de la paz es todavia peor", 35); Sleep(600);
	imprimir("tus soldados te presionan para que pagues por tus crimenes, pero tienes a varios generales de tu lado que ""no vieron nada""", 35); Sleep(600);
	imprimir(" 1) tomar la resposabilidad de tus acciones    2) pedir un favor a tus generales", 35);
}
void pelea(){
	imprimir("tu y tus tropas no podían soportar mucho mas, ", 45); Sleep(650);
	imprimir("tenias que actuar ya ", 45); Sleep(650);
	imprimir("corriste directamente a tu nave y pediste ayuda", 45); Sleep(650);
	imprimir("por suerte una tropa Zorathiana estaba relativamente cerca", 45); Sleep(650);
	imprimir("mientras los Zorathianos llegaban ustedes tuvieron que defenderse\n\n", 45); Sleep(650);
	imprimir("a los humanos los creian unos tontos pacifistas en todo el cosmos", 45); Sleep(650);
	imprimir("pero no lo son", 65); Sleep(650);
	imprimir("simplemente saben los horrores de la guerra y no creen que nadie sea merecedor de esos horrores\n\n", 45); Sleep(650);
	imprimir("tienes que defenderte mientras llegan los Zorathianos\n\n", 45); Sleep(650);
	imprimir("que decides? 1) usar la fuerza militar completa  2) esperar con las defensas minimas a la ayuda", 45); Sleep(650);
}
void maxi(){
	imprimir("no puedes esperar para siempre", 35); Sleep(600);
	imprimir("aunque te desagrade volver a los metodos violentos despues de tantos siglos ", 35); Sleep(600);
	imprimir("esta en tu naturaleza y en la de tus soldados ", 35); Sleep(600);
	imprimir("son humanos despues de todo", 35); Sleep(600);
	imprimir("hubo milenios en lo que el primer concepto que entendimos fue el de la guerra", 35); Sleep(600);
	imprimir("unos cuantos siglos de paz no cambiaran eso", 35); Sleep(600);
	imprimir("cuando los Zorathianos llegaron, se quedaron horrorizados\n\n", 35); Sleep(600);
	imprimir("los pacificos humanos habian masacrado no solo a sus atacantes", 35); Sleep(600);
	imprimir("si no tambien a sus civiles y casi cualquier otro ser vivo, lo unico que pudieron pensar es que eran monstruos", 35); Sleep(600);
	imprimir(" despues de los horrores que presenciaron los Zorathianos", 35); Sleep(600);
	imprimir("reportaron directamente a la federacion galactica ese “incidente\n\n\n”", 35); Sleep(600);
	limpiar(10);
	imprimir("despues de tales acusaciones hacia los humanos por parte de el comandante Zorathiano Zorax", 35); Sleep(600);
	imprimir("juez Sol’Ren: jajajajajaja quieres que te crea que los humanos hicieron esas cosas?", 35); Sleep(600);
	imprimir("Zorax:le juro su excelencia que esto es totalmente cierto lo presencie con todos y cada uno de estos 6 ojos", 35); Sleep(600);
	imprimir("juez Sol’Ren: solo porque te debo una lo tomare en serio y hare una busqueda MINUCIOSA en este asunto", 35); Sleep(600);
	limpiar(5);
	imprimir(" citan a los humanos a juicio por sus acciones y el mentir por su tipo de tecnologia y avances armamentisticos", 35); Sleep(600);
	imprimir("tu al ser el almirante en cargo de esa mision estas en el ojo de el huracan\n", 35); Sleep(600);
	imprimir("despues de meses de investigacion se descubre que la union de terra es mucho mas", 35); Sleep(600);
	imprimir("avanzada y peligrosa de lo que se esperaba", 35); Sleep(600);
	imprimir("a los humanos se les da dos opciones", 35); Sleep(600);
	imprimir("1) abrirse al comercio de esas armas   2) desmantelar todas sus operaciones belicas", 35); Sleep(600);
	Sleep(2000);
	imprimir("hola amigo soy yo el Deus Ex Machina <:", 35); Sleep(600);
	imprimir("aqui hay una opcion extra menos aburrida", 35); Sleep(600);
	imprimir("3) declararle la guerra a todos", 35); Sleep(600);
}
void EndingArmasNO() {
	imprimir("Como rayos se te ocurre dejar a tu pueblo sin armas?", 35); Sleep(600);
	imprimir("Obviamnete esta no es una opcion", 35); Sleep(600);
	imprimir("Nos vamos a la guerra", 35); Sleep(600);
	limpiar(10);
	void endingOrco();
}
void EndingCanon(){
	imprimir("no pueden volver a esas raices belicas por las cuales han luchado mucho en separarse", 35); Sleep(600);
	imprimir("intentas volver a hablar con ellos y mantener el dialogo", 35); Sleep(600);
	imprimir("despues de hablar y defenderse con armas no letales ", 35); Sleep(600);
	imprimir("cesan el fuego asi que creen que estan dispuestos al dialogo", 35); Sleep(600);
	limpiar(5);
	imprimir("obviamente era una trampa", 35); Sleep(600);
	limpiar(5);
	imprimir("los ham masacrado a todos", 35); Sleep(600);
	imprimir("los Zorathianos llegaron solo para ver a todos los humanos masacrados", 35); Sleep(600);
	imprimir("tu amigo el general Zorax logro reconocerte,", 35); Sleep(600);
	imprimir("y junto con todos tus solados valientes fueron regresados a gahia", 35); Sleep(600);
	imprimir("donde al fin pudiste descansar sabiendo que te mantuviste firme a tus ideales", 35); Sleep(600);
	std::cout << R"(                
				_|_
                 |
             .-'''''-.
          .-'    '-.
       .-'  :::::_:::::  '-.
   ___/ ==:...:::-:::...:== \___
  /_____________________________\
':'-._________________________.-'_
 ':::\ @-,`-[-][-^-][-]-`,-@ / _| |_
  '::| .-------------------. ||_ @ _|
   ::|=|*   ___  _  ___   *|=|'.| |
   ':| |'   ))_) )) ))_)  '| |::.^|
   _:|=|'  ((`\ (( ((     '|=|::::::.
 _| || |'        _        '| |:::::::.
|_   |=|'2512  _( )_  2557'|=|':::::.
  | || |' (   (_ ~ _)   ) '| | ':::'
  |^||=|*  )    (_)    (  *|=| '::'
     | '-------------------' .::::'
     |_____________________.::::::'
   .'___________________.::::::''
   |_______________.::::'':::'''
 .'_____________.::::::''::::''
            .:::'''' ::: .'::::'
         .:::::''':.   .:::::')";

}
void endingArmasSi() {
	imprimir("deciden abrirse al comercio y volver a sus raices como a los inicios de los 2000", 35); Sleep(600);
	imprimir("en ese entonces existia una region de la tierra conocida como Estados Unidos", 35); Sleep(600);
	imprimir("mientras mas armas y tecnologia exportaban mas ricos y mas beneficioso fue para la union de terra", 35); Sleep(600);
	imprimir("pero el caos no tardo nada en desatarse", 35); Sleep(600);
	imprimir("ellos sabian que esto pasaria", 35); Sleep(600);
	imprimir("a federcion entera se sumio en el caos gracias a que no supieron el poder que dejaron libre en manos de gobiernos tan inestables como en el de los Kroll y los Ferengi\n\n", 35); Sleep(600);
	imprimir("ya no habia nada mas que hacer", 35); Sleep(600);
	imprimir("la humanidad arrepentida decidio huir antes de que fuera muy tarde", 35); Sleep(600);

}
void endingCarcel() {
	imprimir("Wow, no crei que te fueras a rendir tan rapido, ", 35); Sleep(600); imprimir("cometiste crimenes de guerra, no espere que fueras tan cobarde", 35);
	limpiar(4);
	imprimir("Al final la culpa de dejar a tus tropas te consume, ", 35); Sleep(300); imprimir("Decides que lo mejor es entregarte y confesar la atrocidad que cometiste ante el consejo galactico", 35);
	Sleep(777);
	imprimir("Al llegar a tu sistema solar y ves la orvita de tu planeta sobre el horizonte abres la comunicacion con el consejo\n\n\n", 35);
	Sleep(777);
	limpiar(8);
	imprimir("se te lleva inmediatamente a jucio...", 35); Sleep(600);
	imprimir("Director del consejo Sol'Ren: Almirante "); std::cout << nombre; imprimir("por sus mosntruosos crimenes ante la humanidad, no queda otra sentencia mas que la cadena perpetua", 35);
	imprimir("Se le llevara directamente a la penitenciaria de maxima seguridad de terra");
	limpiar(5);
	imprimir("BAD ENDING CRIMINAL DE GUERRA");
	std::cout << R"(     
     \                  ###########                  /
      \                  #########                  /
       \                                           /
        \                                         /
         \                                       /
          \                                     /
           \                                   /
            \_________________________________/
            |                                 |
            |                                 |
            |                                 |
            |            _________            |
            |           |         |           |
            |           |   ___   |           |
            |           I  |___|  |           |
            |           |         |           |
            |           |         |           |
            |           |        _|           |
            |           |       |#|           |  ;,
    -- ___  |           |         |           |   ;'
    H*/   ` |           |         |      _____|    .,`
    */     )|           I         |     \_____\     ;'
    /___.,';|           |         |     \\     \     ."`
    |     ; |___________|_________|______\\     \      ;:
    | ._,'  /                             \\     \      .
    |,'    /                               \\     \
    ||    /                                 \\_____\
    ||   /                                   \_____|
    ||  /              ___________                \
    || /              / =====o    |                \
    ||/              /  |   /-\   |                 \
    //              /   |         |                  \
   //              /    |   ____  |______             \
  //              /    (O) |    | |      \             \
 //              /         |____| |  0    \             \
//              /          o----  |________\             \
/              /                  |     |  |              \
              /                   |        |               \
             /                    |        |             leb
            /                     |        |)";

}
void endinOrco() {
	imprimir("Se suponia que los humanos eran cobardes.\n\n", 35); Sleep(600);
	imprimir("En el registro de especies de la Federacion Galactica figuraban con un 2 de 16 en el indice de agresividad.", 25); Sleep(300);
	imprimir("Nuestras interacciones con la Union Terrana hasta ese momento apoyaban esas conclusiones. ", 30); Sleep(200);
	imprimir("No habian librado ninguna guerra entre ellos en siglos, y habian formado un gobierno mundial unificado antes de lograr el viaje FTL.", 25); Sleep(400);
	imprimir("Habian respondido con entusiasmo y no con hostilidad al primer contacto, a diferencia de muchas especies.", 15);

	limpiar(5);

	imprimir("Nos ", 100); Sleep(400); imprimir("Equivocamos", 130);

	limpiar(2);

	std::cout << R"( _        _______ 
( (    /|(  ___  )
|  \  ( || (   ) |
|   \ | || |   | |
| (\ \) || |   | |
| | \   || |   | |
| )  \  || (___) |
|/    )_)(_______)
                  )";
	Sleep(2);
	std::cout << R"( 
 _______  _______ 
(  ____ \(  ____ \
| (    \/| (    \/
| (_____ | (__    
(_____  )|  __)   
      ) || (      
/\____) || (____/\
\_______)(_______/
                  )";
	Sleep(2);
	std::cout << R"( 
 _______  _______ _________ _______  _       
(       )(  ____ \\__   __/(  ___  )( (    /|
| () () || (    \/   ) (   | (   ) ||  \  ( |
| || || || (__       | |   | (___) ||   \ | |
| |(_)| ||  __)      | |   |  ___  || (\ \) |
| |   | || (         | |   | (   ) || | \   |
| )   ( || (____/\   | |   | )   ( || )  \  |
|/     \|(_______/   )_(   |/     \||/    )_)
                                             )";
	limpiar(2);
	std::cout << R"( 
 _______  _______  _       
(  ____ \(  ___  )( (    /|
| (    \/| (   ) ||  \  ( |
| |      | |   | ||   \ | |
| |      | |   | || (\ \) |
| |      | |   | || | \   |
| (____/\| (___) || )  \  |
(_______/(_______)|/    )_)
                           )";
	limpiar(1);
	std::cout << R"(                ,.-:~:'*:~-.°          ___                       ___                             ,.-:^*:*:^:~,'                         __  '        
            .·´:::::::::::::::;      .:´/::::;'`;     ‘           .:´/::::;'`;     ‘                 ,:´:::::::::::::::/_‚                 ,·:'´/::::/'`;·.,    
          /::;:-·~^*^~-:;:/ °    /::/::::/:::/'i              /::/::::/:::/'i                    /::;:-·^*'*'^~-;:/::/`;   '        .:´::::/::::/:::::::`;  
      ,.-/:´     .,       ;/       /·´¯¯¯'`;/::'i'       ‚     /·´¯¯¯'`;/::'i'       ‚           /:´    ,. –.,_,.'´::/:::';' '       /:;:· '´ ¯¯'`^·-;::::/' ‘
     /::';      ,'::`:~.-:´;      i          'i::'¦             i          'i::'¦                 ,/    ,:´';         ;'´¯`,:::'i'       /·´           _   '`;/‘   
    /;:- ´        `'·–·;:'/' _    ';          ¦::;             ';          ¦::;              ' ,'     ';:::`,       ,:     ';::i‘      'i            ;::::'`;*     
  /     ;:'`:.., __,.·'::/:::';    ;         ;::;  °           ;         ;::;  °            ;      ';:::/:`::^*:´;      i::';'‘      `;           '`;:::::'`:,  
 ;'      ';:::::::::::::::/;;::/    ';        ;:,'_ ,.-·~^; °  ';        ;:,'_ ,.-·~^; °   i       `;/::::::::,·´      ';:/'‘         `·,           '`·;:::::';
 ¦         '`·-·:;::·-·'´   ';:/‘     ';      ';:/:::::::::/::i'    ';      ';:/:::::::::/::i'    ';         '` *^*'´         .'/‘         ,~:-'`·,           `:;::/'
 '\                         /'       ,:      '/::;:-·~^';::'/'    ,:      '/::;:-·~^';::'/'     '\                         /          /:::::::::';           ';/  
   `·,                  ,·'  '      i´        ¯          'i/ '   i´        ¯          'i/ '       `·,                ,-·´ '         ,:~·- . -·'´          ,'´    
       '`~·- . , . -·'´            '`·,_          _ , ·'´‘     '`·,_          _ , ·'´‘            '`*~·––·~^'´  '             '`·,               , ·'´      
                                        ¯ `'*'´ ¯     '             ¯ `'*'´ ¯     '                    '                              '`*^·–·^*'´'           ‘)";
}
void favor() {
	imprimir("ESTA ACCION TENDRA CONSECUENCIAS", 80);
	std::cout << R"(
                                  \    /
                                   \  /
                                .--.().--.
                               {\_o(  )o_/}
                                {/_/\/\_\}
                                 \/    \/
                                ,/      \,
                               (/        \)
)";
	limpiar(5);
		imprimir("la culpa te consume, pero eres ",  35); std::cout << nombre; imprimir(" ningun otro humano podria realizar tus asa;as, la humanidad jamas tendra otro almirante y/o embajaor de tu nivel", 35);
	Sleep(600);
	imprimir("que harian esos inutiles sin ti? fuiste el primer humano en conocer a los Arcturianos", 35); 
	Sleep(600); imprimir("no puedes dejar que un simple error defina toda tu carrera, llamas a el Captian guevara a tu camarotE\n", 35);
	Sleep(300); imprimir("le pides algo que seria inimaginable, pero no puedes dejar que nadie mas lo sepa, el capitan sale de tu camarote y rpocede a ejecutar tu orden\n", 35);
	Sleep(600); imprimir("*RUIDO DE DISPAROS*\n\n"); imprimir("30 minutos despues", 45); limpiar(3);

	imprimir("capitan guevara: los dicidentes fueron eliminados con exito, ahora espero que este favor se devuelva algun dia");
	
}

int main()
{	
	title("");

	intro();

	imprimir("\n\nque vas a decidir?"); Sleep(300); imprimir(" 1) huir, 2) quedarse y pelear", 35);
	std::cin >> dec;
	if (dec == 1)
	{
		huida();
		std::cin >> dec2;
		if ( dec2 == 1)
		{
			endingCarcel();
		}
		else if (dec2 == 2){
			favor();
		}
	}
	else if (dec == 2) {
		pelea();
		std::cin >> dec2;
		if (dec2 == 1)
		{
			maxi();
			if (dec3 == 1) {
				endingArmasSi();
			}
			else if (dec3 == 2) {
				EndingArmasNO();
			}
			else if (dec3 == 3) {
				endinOrco();
			}
		
		}
		else if (dec2 == 2) {
			EndingCanon();
		}
	}

}


