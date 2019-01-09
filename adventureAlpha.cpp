#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main ()
{

	int x = 1,
		y = 0,
		numLives = 5,
		score;
	
	string surviveOrDie,		   
		   firstDirection, 
		   shipOrNot,
		   afterSwim,
		   afterFirstSleep,
		   afterClimb,
		   afterRaptor,
		   useBandages,
		   afterTame,
		   afterNoTame,
		   rapterName,
		   huntMegatherium,
		   stayAfterWolf,
		   huntingTarget,
		   huntMegaloceros,
		   afterLegWound,
		   feedOrNot,
		   dolphinRide,
		   infection,
		   gunOrPike,
		   sarcoTameArc,
		   sarcoLair,
		   afterNoSarco,
		   dimorphodonDeath,
		   sarcoEggs,
		   keepBabySarco,
		   sarcoName,
		   outToSea;
	
	
do
{
	cout << "\nDisclaimer: this game is case sensitive, but if you answer something that is not correct, the question will be asked again. Your options \n"
			"will be presented in the following format : (option A, or option B)\n"
	        "you will write either option A, or option B exactly as presented. if there is a choice then star (up*, down) you have to type \"up\" \n"
	        "Enter the number of lives you want to begin the game with. (3, 5, 10, or more. more starting lives = lower score at the end \n\n";
    cin >> numLives;
    cin.ignore();
}while(numLives != 3 && numLives != 5 && numLives !=10 && numLives < 10);
	
int z = 1;
for (	; z < numLives + 1; z++)
{	
    
    do
    {
    x = 0;
    cout << "You are the last of the crew... your ship sailed off course onto an island in the middle of the Pacific Ocean. \n"
			"Your ship is in the water a little way off shore, but it is in tatters. In the distance, clouds can be seen \n"
			"and there seems to be a sharp rise in the middle of the island. possibly a mountain? It is hard to tell. the sun\n"
			" is setting on your side of the beach so you know that you are on the west side of the island. you could go West \n"
			"more and look for supplies in the sunken ship, but it may be risky as you dont know these waters. you could also \n"
			"go north or south along the shoreline to search the perimeter of the island. Or, you could go into East, deeper \n"
			"into the island to find food, water, or shelter Where do you want to go? (East, West*, North, or South.) ";
	getline (cin, firstDirection);
	cout << endl;
	
	
	if (firstDirection == "West")
	{  
		do
		{
		x = 0;
		cout << "You head into the water to find your ship. as you swim out, you realize that the wreckage is farther away than \n"
		"you anticipated. You dive into the water and see a devastated hull, there is a gap in the side that you might be able \n"
		"to squeeze through, but you fear that you may run out of breath. Investigate the ship or return to the island? \n"
		"(return, or investigate) ";
		getline (cin, shipOrNot);
		cout << endl;
		
		if (shipOrNot == "investigate")
		{
			cout << "you swim into the ship and see a flicker in the corner... you continue farther along an abandoned hallway, \n"
					"and you see your old bunk. you see the flicker again out of the corner of your eye... You feel a sharp pain in your \n"
					"leg! you turn and it is dark but you see the faded outline of a small shark! You hit it and shake it off of your leg, \n"
					"and you swim for the exit but more predators smell your blood and chase you. you try to fend them off but you are \n"
					"wasting too much oxygen. As you exit the ship you begin to lose consciousness... your vision slowly fades to black \n"
					"and you hardly feel the bites... You died.\n";
			cout << "You have " << numLives - z << " lives left. Enter a character to restart";
			cin.ignore();
			cin.get();
		
		}
	    
	    else if (shipOrNot == "return")
	    {
			do
			{
	    	x = 0;
	        cout << "You begin your swim back to shore, but the waves pull you outward back towards the sea. It is a long struggle to \n"
					"reach the island, and on the way you see a dorsal fin poke out of the water. As you plant your feet on dry land \n"
					"you hear a swoosh as the animal with the fin swims away. It is beginning to get cold, but you realize that you \n"
					"have drifted North in your swam back to the island. The shore is rocky and you see cliffs in the distance farther \n"
					"North. It is getting dark. Do you want to go to the cliffs, or go East into the forest? (go to cliffs*, or go east) ";
	        getline (cin, afterSwim);
	        cout << endl;
	        
	        if (afterSwim == "go to cliffs")
	        {
	            do
				{
				x = 0;
	            cout << "You walk farther along the beach and feel as if there are eyes watching you. The sun has set and it is dark outside. You \n"
						"are beginning to feel hungry and tired, but you decide that you need to find a place to rest. The beach gets rockier and \n"
						"rockier. You approach the large cliff face in front of you. You look around the cliff to see if there is a way up, but it \n"
						"is too dark to try and make the climb. The bottom of the cliff has a small cave entrance that you decide to use as shelter \n"
						"for the night. It is a constant temperature in the cave, so you are not so cold anymore. you are still worn out and hungry, \n"
						"but you decide that you will think better tomorrow after a good nights rest. You fall sleep. \nZzZzZzZz...\nZzZzZzZzZz...\n\n"
						"you wake up to the sunrise, and you are not sure if you want to try to find a way up the cliffs in the light, or explore \n"
						"farther into the cave. (explore cliffs, or explore cave) ";
	            getline(cin, afterFirstSleep);
	            cout << endl;
	            
	            if (afterFirstSleep == "explore cliffs")
	            {
	                cout << "You search for a way up the cliff, and you find it after some effort. You mak it to the top, but you will not be able to escape \n"
							"quickly back down. It is to high up. The top of the cliff is mostly barren besides a short grass. The cliff edge surrounds you \n"
							"on three sides. Inland a short distance is a thick forest area. You walk towards the edge of the forest, and you see an orange \n"
							"frill of feathers pass behind some brush in the distance. The vines block your vision so you do not see the creature until you \n"
							"are to close to run. You believe that the creature is a Utahraptor. It is nearly six feet tall and it has huge single claws on \n"
							"each foot. It notices you and you try to run. The raptor grabs your leg in its mouth! You are tripped up ont the vines as you try \n"
							"to escape. You reach the edge of the cliff and attempt to fight the raptor, but you are no match. It rips you apart and you die.\n";
	              
					cin.ignore();
					cout << "You have " << numLives - z << " lives left. Enter a character to restart";
					cin.get();   
	            }
	            
	            else if (afterFirstSleep == "explore cave")
	            {	
					
					do
					{
					x = 0;
	                cout << "You explore deeper into the cave and find a door. You go inside and realize that the cave you are in is some kind of abandoned \n"
							"hunting base. You find an old bow and some arrows. You put them on your back, and continue to search around. You find some \n"
							"bandages and you decide to bring them with you. You also find a knife. You head back out and search for a way up the cliff. \n"
							"You find a route to the top after an hour or so of searching around the base of the cliffs. At the top, it is clear around the \n"
							"edge, but there is a forest towards the inland. Do you want to rest in the open ground, or veture into the forest? (rest, go into forest) ";
	                getline(cin, afterClimb);
	                cout << endl;
// doing \n to make output pretty	                
	                if (afterClimb == "rest")
	                {
//						
					do
					{
					x = 0;
	                    cout << "You rest in the sunlight to regain your energy... You feel a presence watching you... The sun is directly above you now. You must \n"
								"have fallen asleep while you were resting. You see movement in the brush along the edge of the forest. You see a shadow dart through \n"
								"the dark, just out of view. You ready your bow. A raptor like creature jumps out of the brush! It is still twenty feet out and you \n"
								"take aim with your bow. You shoot and hit its abdomen. You shoot again and miss. The raptor continues its charge, and you pull out \n"
								"your knife. It jumps for you and you roll out of the way. It throws out its head for a bite, and you block with your knife. It begins \n"
								"to rip at your clothes, but it is slowing down. You continue to hold it back and eventually it collapses on you. The arrow flew true. \n"
								"You hear a high pitched squeal. Do you search for the squeal, or return to the cave? (search, return) ";
	                    getline(cin, afterRaptor);
						cout << endl;
	                    
	                    if (afterRaptor == "search")
	                    {
	                   		do
	                   		{
	                   		x = 0;
	                        cout << "You walk into the forest in your search for the squeal. You find a smaller version of the raptor you just shot. This one is only about \n"
									"four feet tall. It has an arrow lodged in its leg. The raptor looks at you, but it does not try to attack. You wrap its mouth shut with \n"
									"one of your bandages to keep it from attracting others.The raptor looks young enough to be impressionable, and it has large eyes that \n"
									"hint towards intelligence. The wound in its leg is not fatal, but the raptor will bleed out if it is not bandaged. The wound would take \n"
									"the rest of your bandaging kit, but having a raptor grow up to help you would be immensely valuable, but it may not stay loyal. You could \n"
									"to use the bandages on the raptor in hopes to gain an allie, or save them in case you need them later. Do you want to use the bandages? \n"
									"(yes, no) ";
	                		getline (cin, useBandages);
	                		cout << endl;
							if (useBandages == "yes" || useBandages == "no")
							{
								cout << "\n";
							}
							else
							{
								cout << useBandages << " is not a valid answer choice, please answer again. ";
								x = 1;
							}
							}while(x == 1);
	                    }
	                    else if (afterRaptor == "return")
	                    {
	                        cout << "You collect the arrows that feel out of there quiver in the fight with the raptor. You continue to hear the squeal. You hear more movement \n"
									"in the brush and turn to see two more raptors at the edge of the forest. They charge for you before you have time to noch an arrow! you run \n"
									"for the cliff, but the raptors have caught you. One jumps and brings you down. You both slide off of the cliff face with the raptor. Your \n"
									"last thought is how the squealing must have attracted your killers... You die. \n";
							useBandages = "dead";
//usebandages = dead so that in next if, if you did not get to use bangages, the else doesn't catch you		
							cin.ignore();
							cout << "You have " << numLives - z << " lives left. Enter a character to restart";
							cin.get();
							
	                    }
						else
						{
							cout << afterRaptor << " is not a valid answer choice, please answer again. ";
							x = 1;
						}
					}while(x == 1);	
					
					}
	                
	                else if (afterClimb == "go into forest")
	                {	
	                	do
	                	{
	                	x = 0;
	                    cout << "You veture into the edge of the forest. You hear a rustle farther in. It could be the wind. You walk farther in and notice a quick movement \n"
								"to your right. You venture further still and see a small furry creature ahead. You crouch down and hear a noise farther out. You notice an \n"
								"orange frill of feathers behind the fur covered animal. The frill belongs to a two lagged lizard like creature! It pounces on the small \n"
								"mammal and begins to tear it apart. You take out your bow and shoot. The arrow hits the raptor-thing in the upper chest. It runs a short \n"
								"distance and falls. You shoot a second arrow and miss slightly high. The raptor thrashes around and eventually slows to a stop. the mammal \n"
								"is dead. You hear a high pitched squeal. Do you search for the squeal, or return to the cave? (search, return) ";
	                    getline(cin, afterRaptor);
	                    
	                    if (afterRaptor == "search")
	                    {
	                        cout << "You walk into the forest in your search for the squeal. You find a smaller version of the raptor you just shot. This one is only about \n"
									"four feet tall. It has an arrow lodged in its leg. The raptor looks at you, but it does not try to attack. You wrap its mouth shut with \n"
									"one of your bandages to keep it from attracting others.The raptor looks young enough to be impressionable, and it has large eyes that \n"
									"hint towards intelligence. The wound in its leg is not fatal, but the raptor will bleed out if it is not bandaged. The wound would take \n"
									"the rest of your bandaging kit, but having a raptor grow up to help you would be immensely valuable, but it may not stay loyal. You could \n"
									"to use the bandages on the raptor in hopes to gain an allie, or save them in case you need them later. Do you want to use the bandages? \n"
									"(yes, no) ";
	                		getline (cin, useBandages);
	                		cout << endl;
	                         
	                    }
	                    
	                    else if (afterRaptor == "return")
	                    {
	                        cout << "You collect the arrows that feel out of there quiver in the fight with the raptor. You continue to hear the squeal. You hear more movement \n"
									"in the brush and turn to see two more raptors at the edge of the forest. They charge for you before you have time to noch an arrow! you run \n"
									"for the cliff, but the raptors have caught you. One jumps and brings you down. You both slide off of the cliff face with the raptor. Your \n"
									"last thought is how the squealing must have attracted your killers... You die. \n";
							cin.ignore();
						    cout << "You have " << numLives - z << " lives left. Enter a character to restart";
							cin.get();	                        	                               
	                    }
	                    else
	                    {
	                    	cout << afterRaptor << " is not an answer choice, please answer again \n\n";
	                    	x = 1;
	                    }
	                    
	                    }while(x == 1);
	                }
	                else
					{
						cout << afterClimb << " is not a valid answer choice, please answer again. ";
						x = 1;
					}
	                }while (x == 1);
	                
	                if (useBandages == "yes")
	                {
//DO WHILES DONE UNTIL HERE	
							do
							{	
							x = 0;				
	                        cout << "You bandage the raptors leg, and the bleeding stops. You carry it to the edge of the cliff, and realize that there is no way that you are \n"
									"going to be able to carry the raptor down the cliff face. You search for a way around the edge, and you eventually find one, but it is \n"
									"nearing night time and you are thirsty and tired. You see a small furry creature on the way and shoot it to give your raptor a first meal. \n"
									"It looks like a beaver. You finally arrive at your cave-house to find a jar of water. The jar replenishes your thirst, but it wont last long. \n"
									"Do you search for water, or go to bed? (search, or go to bed) ";
	                        getline(cin, afterTame);
	                        cout << endl;
	                        if (afterTame == "search")
	                        {
	                            cout << "You look around for water, and find a small blue lake near by. You fill your jar with water, but a beaver creature enters the water, and you see \n"
										"a swirl farther into the lake. You decide its a good idea to leave and you return home. you use the flint and steel to start a small fire to boil \n"
										"the water. You go to sleep with the raptor in the storage closet. You wake up the next morning with a dilemma. \n";
	                            
	                        }
	                        
	                        else if (afterTame == "go to bed")
	                        {
	                            cout << "You fall asleep with the raptor locked in the closet. You dont trust it yet. ZzZzZz\n you wake up thirsty. You look around for water, and find a \n"
										"small blue lake near by. You fill your jar with water. You also find a wild strawberry bush. You see crocodile looking creature in the distance... \n"
										"It is far larger than any crocodile you have ever seen. You decide that you will only go near the lake for water when you need it. You know that \n"
										"you can survive for a while off of the smaller forest creatures and berries for a while. ";
	                            
	                        }
	                        
	                        else
	                        {
	                        	cout << afterTame<< " is not a valid answer choice, please answer again. ";
								x = 1;
	                        }
	                        }while(x == 1);
	                        
	                        do
	                        {
	                        x = 0;
	                        cout << "You realize that you have yet to name your newfound pet. What do you decide to call him? ";
	                        getline (cin, rapterName);
							cout << endl;
	                        cout << "Yes, " << rapterName << " that should be his name. A few weeks have passed and " << rapterName << " has healed enough to be a self sufficient \n"
									"hunter. You found out that he likes the taste of cooked meat more than raw, so he doesn't stray to far, and he even brings you small stuff like \n"
									"squirrels. He once brought you a young beaver thing. You cant ever adventure out vary far, because it is hard to store enough food for a \n"
									"multiple day journey. " << rapterName << " would be happy to follow you if you kept some meat on you. You have found a few huge sloth-bear \n"
									"like creatures and some huge elk, but you dont know if you should risk hunting them. Do you want to try and take down a sloth-bear? \n"
									"(yes, or no) ";
	                        getline(cin, huntMegatherium);
	                        cout << endl;
	                       

//start of hunting megatherium story

	                        if (huntMegatherium == "yes")
	                        {
	                        	do
	                        	{
	                        	x = 0;
	                            cout << "You find a sloth-bear grazing in the forest several yards away. You take aim with your bow and shoot it in the back. You dont know if you hit any \n"
										"vitals, but the sloth bear knows you hit him. It turns to chase you as you knock another arrow. You hit it in the lower chest, and you turn to run. \n"
										"You find a hollowed out stump big enough to crawl into. Go in the stump or continue to fight the sloth? (hide, or fight) ";
	                            getline(cin, huntMegatherium);
	                            cout << endl;
	                            
	                            if (huntMegatherium == "fight")
	                            {
	                                cout << "You put in one more shot before the creature reaches you. You hit it in the lower neck, but not the center. The arrow was not enough to kill the beast, \n"
											"and it is closing on you. You hear a screech, and see it arches its back and stand tall. You see a long hook shaped claw reach around its shoulder. You \n"
											"take the distraction to let loose another arrow. This one hits a vital and the sloth bear slowly collapses. As it falls you see " << rapterName << " on \n"
											"its back, ripping at it. You think to yourself that it was a good decision to keep " << rapterName << " as a pet. you use your knife to harvest as much \n"
											"of the meat as you can carry, and head back home with your allie trailing you. ";
// in progress after raptor helps with sloth	                                
	                            	                            	                        
	                            }
	                            
	                            else if (huntMegatherium == "hide")
	                        
	                            {
	                                cout << "You hide in the stump in hops to escape the monster. Its sticks its head in the entrance and you slash it in the nose with your knife. You stay hidden \n"
											"for some time until the beast leaves, then you follow it out. It has lost a lot of blood and is moving sluggishly. You shoot it again to take it down, \n"
											"and " << rapterName << " arrives to put the sloth out of its misery with his huge toe claw. It seems like he heard or smelled the fight. You think to \n"
											"yourself that it was a good decision to keep " << rapterName << " as a pet. You use your knife to harvest as much of the meat as you can carry, and head \n"
											"back home with your allie trailing you. ";
// in progress after hiding in stump	                                
	                            }
	                            
	                            else
	                            {
	                            	cout << huntMegatherium << " is not a valid answer choice, please answer again. ";
									x = 1;
	                            }
	                            }while(x == 1);
	                        
	                        	do
	                        	{
	                        	x = 0;
	                            cout << "Once home, you look through the storage room to find a sort of dossier book which contains the names of the creatures on the island. Someone was busy... \n"
										"You find out that the sloths are called Megatherium and the huge crocodile creature that you encountered during your standerd hunts is called a \n"
										"Sarcosuchus. " << rapterName << " turns out to be a Utahraptor... * a month passes and you learn to hunt large elk creatures as easy targets. * \n";
	                            cout << rapterName << " has grown since you first got him. He is just over four and a half feet tall now, and his leg is fully healed. You go out for a hunt, \n"
										"and you make a clean kill on an elk, but a wolf attacked. " << rapterName << " helped you kill the wolf, but now you are faced with the choice of \n"
										"weather or not to stay and harvest the elk, or leave. (stay or leave) ";
	                            getline(cin, stayAfterWolf);	                            
	                            cout << endl;
	                            if (stayAfterWolf == "stay" || stayAfterWolf == "leave")
	                            {
	                            	cout << "\n";
	                            }
	                            else
	                            {
	                            	cout << stayAfterWolf << " is not a valid answer choice, please answer again. ";
									x = 1;
	                            }
	                            }while(x == 0);
	                        }
//not hunting megatherium story ark	   
	                        
	                        else if (huntMegatherium == "no")
	                        
	                        {
								do
								{
								x = 0;
	                            cout << "You return to the lake for water and find the crocodile creature in the water. You have seen him a few times now, as this lake is his home. You now \n"
										"know the whirling water in the middle to be him hunting. You remember finding a dossier about the creatures on the island in your cave. It talked \n"
										"about the crock being called a sarcosuchus. You have seen it out smarting much faster prey than itself. do you want to get a closer look? (yes, or no) ";
	                            getline(cin, sarcoTameArc);
	                            cout << endl;
//sarco taming storyline	                            
	                            if (sarcoTameArc == "yes")
	                            {
	                            	do
	                            	{
	                            	x = 0;
	                                cout << "You see that the sarco is going to the same place after each kill. You wonder whether this is by coincidence or if the sarco has been storing something \n"
											"in a sort of lair. after an hour or so, you see the sarco wander off into the forest. do you want to look for its lair? (yes or no) ";
	                                getline(cin, sarcoLair);
	                                cout << endl;
	                                
	                                if (sarcoLair == "yes")
	                                {
	                                	do
	                                	{
	                                	x = 0;
	                                    cout << "You leave " << rapterName << " behind and swim into the lake to the place where you see the sarco retreating after kills. You head deeper into the water, \n"
												"and find what looks like a giant beaver damn. You enter, and it is big enough to be a one room house. It smells awful, and there are a few dead animals \n"
												"laying around. in the corner you see a nest!. Do you want to take some eggs? (take eggs or don't take eggs) ";
	                                    getline(cin, sarcoEggs);
	                                    cout << endl;
	                                    if(sarcoEggs == "take eggs")
	                                    {
	                                    	do
	                                    	{
	                                    	x = 0;
	                                    	cout << "You take three eggs. They are about the size of a softball. You exit the sarco's den-thing, and come out of the lake. As you leave, you see the sarco enter the \n"
													"water. One of the eggs cracks, and a nearly developed embreo begins to slide out. " << rapterName << " Arrives, and you feed him the egg. You head home, and put \n"
													"the eggs in a drawer for a few days so that " << rapterName << "doesn't eat them. You come home after a hunting/gathering excursion, and you hear a scratching \n"
													"sound coming from the drawer. You open it to find a hatched baby sarco! Do you want to keep it? (yes or no) ";
	                                    	getline(cin, keepBabySarco);
	                                    	cout << endl;
	                                    	
	                                    	if (keepBabySarco == "yes")
	                                    	{
	                                    		cout << "you decide to keep the baby sarco. you hope that it will stay friendly when it gets bigger. You also decide to leave it in the cave when you are gone, because it \n"
														"is too small to fend for itself. what do you want to name it? ";
	                                    		getline(cin, sarcoName);
	                                    		cout << "You feed " << sarcoName << " scraps from your meals and you let him lay in the sun in the mornings. " << rapterName << " seems to like " << sarcoName << ". After \n"
														"a week or so, " << sarcoName << " has grown to be about a foot and a half long. He is big enough to go after minos in the ocean, and you take him to a stream \n"
	                                    				"nearby often. the other egg never hatched, so you gave it to " << rapterName << ". " << rapterName << " has also grown. He is about five or so feet tall now. \n"
														"He seems to be the protector of " << sarcoName << ". ";
													 
														cout << endl;
	                                    				
//add more after this, story not done yet     -------->	                                    				
	                                    	}
	                                    	else if (keepBabySarco == "no")
	                                    	{
												cout << "You decide that you cant keep the baby, so you set it free. ";
	                                    	}
	                                    	else
	                                    	{
	                                    		cout << keepBabySarco << " is not a valid answer choice, please answer again. ";
												x = 1;
	                                    	}
	     //after keeping baby sarco         
	     									}while(x == 1);                      	        
	                                    }
	                                    else if (sarcoEggs == "don't take eggs" || sarcoEggs == "dont take eggs")
	                                    {
	     									sarcoTameArc = "no";
	     									cout << "you exit the lake, and ";
//	    leaving lair withought                                 
	                                    }
	                                    else
	                                    {
	                                    	cout << sarcoLair << " is not a valid answer choice, please answer again. ";
											x = 1;
	                                    }
	                                    }while(x == 1);
// taking sarco eggs	                                    
	                                }
	                                
	                                else if (sarcoLair == "no")
	                                {
	                                    cout << "You decide that you have gotten close enough to the Sarco's business, so you turn around and ";
	                                    		
	                                }
	                                else
	                                {
	                                	cout << sarcoLair << " is not a valid answer choice, please answer again. ";
										x = 1;
	                                }
	                                }while(x == 1);
	                                
	                            }
	                            
//Did not investigate sarco story line \/	                            
	                            else if (sarcoTameArc == "no")
	                            {
	                                cout << "You have decided not to look closer at the sarco at all, so ";	                                
	                            }
	                            
	                            else
	                            {
	                            	cout << sarcoTameArc << " is not a valid answer choice, please answer again. ";
									x = 1;
	                            }
	                            
	                            }while(x == 1);
	                            
                                if (sarcoTameArc == "no" || sarcoLair == "no")
                                {
                        // place to put things if player did not investigate sarco or did not investigate sarco lair.  
                        			do
                        			{
                        			x = 0;         
                                    cout << "you return home to find " << rapterName << " eating a small animal. \n"
                                            "A month or so has gone by, and you think about exploring around the beach or trying to find more civilization inland. \n"
											"What do you want to do? (beach or inland) ";
                                    getline(cin, afterNoSarco);
                                    cout << endl;
                                    if (afterNoSarco == "beach")
                                    {
                                    	do
                                    	{
                                    	x = 0;
                                        cout << "You go up along the beach and see a small flying lizard thing. You dont know what it is, but it seems like it has a big \n"
												"mouth compared to its body. its about three feet long. You walk a little farther and see another. you see a third, and they \n"												
                                                "seem to be getting more bold. " << rapterName << " starts walking around sporadically. Do you want to turn back? (yes or no) " ;
                                        getline(cin, dimorphodonDeath);
                                        cout << endl;
                                        if (dimorphodonDeath == "yes")
                                        {
                                            cout << "You begin to walk back towards home and the flyers follow you. ";
                                        }
                                        else if (dimorphodonDeath == "no")
                                        {
                                            cout << "You push onward, and the lizard things begin to gather around you. ";                                            
                                        }
                                        else
                                        {
                                        	cout << dimorphodonDeath << " is not a valid answer choice, please answer again. ";
											x = 1;
                                        }
                                        }while(x == 1);
                                        cout << "They begin to swarm and one dives on you. you hold it back with but it \n"
                                                "knocks you to the ground. " << rapterName << " bites it and throws it off, but the little predators begin to go after him too. \n"
												"He runs into the forest to escape the swarm. You are left open. One of them gets a hold of your arm, and they go in for the kill. You died...\n ";
                                        cout << "Press any key to restart.";
										cin.ignore();
										cin.get();
                                    }
// go into forest and find a shack                                    
                                    else if (afterNoSarco == "inland")
                                    {
                                        cout << " You venture towards the center of the island, through thick forest. Your walk is quickly becoming and uphill adventure. \n";
                                        
                                    }
                                    else
                                    {
                                    	cout << afterNoSarco << " is not a valid answer choice, please answer again. ";
										x = 1;
                                    }
                                    }while(x == 1);
                                }
	                            
	                        }
	                        
	                        else
	                        {
	                        	cout << huntMegatherium << " is not a valid answer choice, please answer again. ";
								x = 1;
	                        }
	                        }while(x == 1);
//put in an if statment, story where raptor dies
                            if (huntMegatherium == "yes" && stayAfterWolf == "yes")
                            {
	                            cout << "You notice a rustle in the nearby brush. You think that it is " << rapterName << " until you hear another sound to your right. \n"
										"You see a white snout apear out of the bush... Its a wolf! you see another to your left! It is a wolf pack. but the wolves are \n"
										"big enough to ride. They close in and you loose an arrow at the biggest one. You hear a screech near by. It's " << rapterName << "!\n"
										"He begins to grapple with on of the wolves while you pull your knife on the other. You barely hold it back as your raptor wears the \n"
										"other one down. The far one is injured, but it bites " << rapterName << "'s leg! You ram your knife into your wolve's chest and it \n"
										"collapses. You move to help " << rapterName << ", and you take care of the other wolf, but you fear the worst. Your one ally is \n"
										"injured beyond repaire... His leg is mangled and he has claw marks on his chest. His breathing slows until it stops completely... \n"
										"You return home. ";
										//story with dead raptor, not done
                            }
                            else if (huntMegatherium == "yes" && stayAfterWolf == "no")
                            {
                            	cout << "You go home, because you fear more wolves will come. You are glad to have " << rapterName << "helping you, but you don't want to risk \n"
										"your life. almost a year goes by without incident, and " << rapterName << " has grown to his full size of about six and a half fet tall, \n"
										"and almost twenty feet long. you realize that the raptor you fought earlier must not have been fully grown yet. You were lucky. ";
//avoid wolf pack and raptor death. hear goes the events after the megatherium decision 	^                            
                            }
                            
                       
	                }
	                    
	                else if (useBandages == "no")
	                {
	                		do
	                		{
	                		x = 0;
	                        cout << "You put the raptor out of its misery... It was the only thing to do. after climbing back down the cliffs to your cave-house you decide \n"
									"to plan your next move. after looking through the storage room, you find a jar of water to satisfy your thirst for now. Will you search \n"
									"for water or hunt for meat? (search, or hunt) ";
	                        getline(cin, afterNoTame);
	                        cout << endl;
	                        
	                        if (afterNoTame == "search")
	                        {
	                            cout << "You look around for water, and find a stream nearby. You also find some small beaver like mammals to hunt during your treck. You even \n"
										"find a wild strawberry bush. You also find a huge sloth-bear hybrid looking thing. It is at least ten feed tall. You decide to leave \n"
										"it alone and return home. You use the flint and steel to make a fire to cook your meat and boil the water. It has been a long day, so \n"
										"you decide to sleep. \nzZzZzZzZ\n incomplete story\n";								
// WORK ON THIS STORY	                            	                           	                            	                            
	                        }
	                       
	                        else if (afterNoTame == "hunt")
	                        {
	                             do
	                             {
	                             x = 0;
	                             cout << "You look around for things to hunt, and find some small mammals. You also find a trickling stream. You even find a wild strawberry bush. \n"
										 "It has been almost a week of surviving on the island and you have created a small stockpile of wood, meat, and water. \n"
										 "your getting lonely, but you have decided to hunt one of the bigger creatures. You found out from a dossier book that you found in \n"
										 "shelter that there are several bigger herbivores on the island. One is called the megatherium and it is slow so you plan to make it your target. \n"
										 "You fin one in the woods, but it is next to a huge elk creature. Do you want to hunt the elk or the megatherium? (elk, or megatherium) \n"; 
	                             getline(cin, huntingTarget);
	                             cout << endl;
	                             if (huntingTarget == "elk")
// hunt elk get kill and hunt regularly but attract wolves later *DONE*	                             
	                             {
	                                 cout << "You look around the forest area near the stream and you find one of the monster elks that you have learned to call a megaloceros. You have \n"
											 "hunter dear before, so you assume that the weakest spot on the megaloceros is located right above the shoulder. You sneak up on the creature, \n"
											 "but it does not seem alarmed. It probably isn't used to humans. You take aim and shoot. the arrow hits just left of its mark, and the creature \n"
											 "rears up on its hind legs. You draw and make another shot as it retreats. It limps away, leaving a trail of blood. Do you want to follow the \n"
											 "trail? (follow, or leave) ";
	                                 getline(cin, huntMegaloceros);
	                                 cout << endl;
	                                 
	                                 if (huntMegaloceros == "follow")
	                                 {
	                                    cout << "You follow the injured beast until it collapses. You harvest all that you can from it and head back to your home. You now have the valuable \n"
												"knowledge that these creatures can be killed, and offer valuable meat and hide. You decide to try and make some clothes that better suit \n"
												"your situation out of the hide. After several routine weeks of hunting and gathering, You have stumbled onto a problem. While you were \n"
												"cleaning a recent kill, you noticed a white flash in the distance and a rumble in the bushes. You know it is not a raptor, because it would \n"
												"have attacked, as raptors are extremely agressive. While you think, you see the pack approaching you. It is a wolf pack. but the wolves are \n"
												"big enough to ride. They close in and you loose an arrow at the biggest one, but the others lung in. You are clawed appart by the wolves and \n"
												"killed. they must have been attracted by the megaloceros kill... you died. \n";
	                                    cout << "Press any key to restart. ";
										cin.ignore();
										cin.get();
	                                 
	                                 }
	                                 
	                                 else if (huntMegaloceros == "leave")
	                                 {
	                                    cout << "You leave the megaloceros alone for now, but you intend to try again later. You return to the forest a few days later, and successfully kill \n"
												"a megaloceros. You decide to make clothes that better suit your environment out of the hide. After several routine weeks of hunting and \n"
												"gathering, You have stumbled onto a problem. While you were cleaning a recent kill, you noticed a white flash in the distance and a rumble \n"
												"in the bushes. You know it is not a raptor, because it would have attacked, as raptors are extremely agressive. While you think, you see \n"
												"the pack approaching you. It is a wolf pack. but the wolves are big enough to ride. They close in and you loose an arrow at the biggest one, \n"
												"but the others lung in. You are clawed appart by the wolves and killed. they must have been attracted by the megaloceros kills... you died. \n";
	                                    cout << "Press any key to restart.";
										cin.ignore();
										cin.get();
	                                     
	                                 }
	                             }
	                             
	                             
	                             else if (huntingTarget == "megatherium")
// hunt mega. get injured and use bandage eventually get infection	                             
	                             {
	                                 cout << "You search near the stream to find the megatherium, and you spot one grazing on a tree several yards away. You take aim with your bow and shoot \n"
											 "it in the back. You dont know if you hit any vitals, but the sloth bear knows you hit him. It turns to chase you as you knock another arrow. You \n"
											 "hit it in the lower chest, and you turn to run. You find a hollowed out stump big enough to crawl into. It claws at the log and its leg scratches \n"
											 "your thigh. You escape the log and run away through the thick forest as you continue to shoot arrows at it. It eventually collapses, and you \n"
											 "harvest the meat. Do you want to wash your leg in the stream and bandage it, or go home? (wash, or go home) ";
	                                 getline(cin, afterLegWound);
	                                 cout << endl;
	                                 if (afterLegWound == "wash")
	                                 {
	                                    cout << "You wash your leg in the stream, and you add bandages to seal the cut. You return home with the meat from the megatherium, and you decide that \n"
												"you should hunt the elk, wich you have learned is called a megaloceros, instead, because it is far less dangerous. ";
	                                    
//contunue later	                                     
	                                 }
	                                 else if (afterLegWound == "go home")
	                                 {
	                                     cout << "You head home with your bounty of food and you eat a good dinner. you bandage your leg and soak it in the salt water. You come to the decision \n"
												 "that you are going to hunt the elk creatures, the megaloceros, instead, as you think that they will be far less dangerous. You continue to hunt \n"
												 "normally for a few days, and you even find dolphin looking creatures in the sea that appear to be friendly. You think that they are the creatures \n"
												 "with the dorsal fins that followed you to shore on your first trip into the water. Do you want to feed them, or keep the food for yourself? (feed, or keep)";
	                                     getline(cin, feedOrNot);
	                                     cout << endl;
	                                     if(feedOrNot == "feed")
	                                     {
	                                         cout << "You feed the dolphins for a few weeks, and they seem to be friendly You decide to make a makeshift saddle for one of them, and it works! \n"
													 "*Your leg wound worsens* \nRiding the dolphins allows you to travel much faster around the perimeter of the island You think that you might \n"
													 "be able to make it down to the ship you arrived on now. Do you want to explore around the island or go back to the ship? (explore, or go back) ";
	                                         getline(cin, dolphinRide);
	                                         cout << endl;
	                                         if (dolphinRide == "explore")
	                                         {
	                                             cout << "You ride one of the dolphins around the outside of the cliffs, and your leg begins to hurt. You are worried about your leg but you want to explore. \n"
														 "You move along the beach, and you see a huge sauropod. You think that it is a brontosaurus, but those have been extinct for millions of years. You \n"
														 "also see a huge two legged dinosaur creature crouching near the sauropod. It attacks and wins the battle. Your leg is burning and you start to sweat. \n"
	                                                     "You head home and your leg has made you bed ridden. do you want to try and amputate it? "
	                                                     "(amputate, or leave it) ";
	                                            getline(cin, infection);
	                                            cout << endl;
	                                            
	                                            if (infection == "amputate")
	                                            {
	                                            	cout << "You try to amputate your leg and you pass out from the bleeding. You never wake up... You died\n";
													cout << "Press any key to restart. ";
													cin.ignore();
													cin.get();
	                                            }
	                                            else if (infection == "leave it")
	                                            {
	                                             	cout << "You try to ignore your leg, but you can't hunt of leave the cave... \n"
	                                                        "You eventually run out of water and die to dehydration and infection... You died\n";
													cout << "Press any key to restart. ";
													cin.ignore();
													cin.get();		
															
	                                            }
												
												
	                                         }
	                                         
	                                         else if (dolphinRide == "go back")
	                                         {
	                                             cout << "You ride the dolphin back down the beach, towards the ship. You reach it, and find that the hole in the side is bigger than whe you first saw the \n"
														 "wreckage. You are able to fit into the ship with your dolphin, and this time you have air left. You leg stings in the salt water. You find a first \n"
														 "aid kit that you strap to your belt. You also find a rifle, and a pike in the cargo bay. You can only hold one. Which one do you want to carry?\n"
	                                                     "(gun, or pike) ";
	                                             getline(cin, gunOrPike);
	                                             cout << endl;
	                                             if (gunOrPike == "pike")
	                                             {
	                                              
	                                                cout << "You begin to swim out of the ship with your new pike in hand. It is a bit rusty, but you think that you can fix it. on the way out, a fish with \n"
															"teeth chases after you, and you spear it. As you move towards the edge of the sea, you notice a shark in the distance, he must have followed the \n"
	                                                        "blood of the fish. Your dolphin thing throws you off and rams straight into the shark. The shark, discouraged, swims away, and your dolphin swimd \n"
															"you up the the surface. you reach home, but your leg is getting really bad. Your infection was stalled by the first aid kit, but it is \n"
															"coming back. you have plenty of food now, but you can no longer go out to hunt. do you want to try and amputate your leg? (amputate, leave it) ";
	                                             	getline(cin, infection);
	                                             	cout << endl;
	                                             		if (infection == "amputate")
	                                                     {
	                                                         cout << "You try to amputate your leg and you pass out from the bleeding. You never wake up... You died \n";
															 cout << "Press any key to restart.";
															 cin.ignore();
															 cin.get();
	                                                     }
	                                                    else if (infection == "leave it")
	                                                     {
	                                                         cout << "You try to ignore your leg, but you can't hunt of leave the cave... "
	                                                                 "You eventually run out of water and die to dehidration and infection... You died\n";
															 cout << "Press any key to restart.";
															 cin.ignore();
															 cin.get();
	                                                     }
	                                                 
	                                             }
	                                             else if (gunOrPike == "gun")
	                                             {
	                                             	cout << "You leave the ship with your rifle in hand. It is a bit rusty, but you belive it will work... Bullets. \n"
	                                             			"You realize that you didn't think about the bullets. You grabbed some, but they may be too water logged to use. \n"
	                                             			"After going onto land, your leg begins to hurt again, and you use the disinfectants in the first aid kit to help \n"
	                                             			"cure it. You realize that you can explore into the sea with the help of your new transport. Do you want to go \n"
	                                             			"out to sea? (explore, stay) ";
	                                             	getline(cin, outToSea);
	                                             	cout << endl;
	                                             	if (outToSea == "explore")
	                                             	{
	                                             		cout << "you venture out into the ocean, and you sea a speck in the distance... it is above the water. you decide to \n"
	                                             				"go and get a closer look. you get within a mile or so, and you realize that it is a cargo ship! You get the \n"
																"captain's attention, and he takes you on board... You Lived. \n \n";
														z+=numLives;
	                                             	}
	                                             	else if (outToSea == "stay")
	                                             	{
	                                             		cout << "You decide not to venture out into the deep, and you go to test your new gun. The bullets work! You move along the beach to find \n"
																"something to hunt. You find an elk thing to hunt, and you kill it. Your infection was stalled by the first aid kit, but it is \n"
																"coming back. you have plenty of food now, but you can no longer go out to hunt. do you want to try and amputate your leg? (amputate, leave it) ";
	                                             		getline(cin, infection);
	                                             		cout << endl;
	                                             		if (infection == "amputate")
	                                                     {
	                                                         cout << "You try to amputate your leg and you pass out from the bleeding. You never wake up... You died \n";
															 cout << "Press any key to restart.";
															 cin.ignore();
															 cin.get();
	                                                     }
	                                                    else if (infection == "leave it")
	                                                     {
	                                                         cout << "You try to ignore your leg, but you can't hunt of leave the cave... "
	                                                                 "You eventually run out of water and die to dehidration and infection... You died\n";
															 cout << "Press any key to restart.";
															 cin.ignore();
															 cin.get();
	                                                     }
	                                             	}
//contn later  ---->	                                             
	                                             }      
	                                         }
	                                         
	                                         
	                                     }
	                                     else if (feedOrNot == "keep")
	                                     {
	                                        cout << "You keep your food for a stockpile, and you are glad. Your leg's infection is getting worse, so you can no longer go out to hunt. \n"
													"Your food storage is running out. You cant leave the cave, so you eventually die of infection and thirst... You died. \n"; 
											cout << "Press any key to restart.";
											cin.ignore();
											cin.get();
	              //this braket is done  V                   		
	                                     }   	                                     
	          //this braket is done  V                                                             
	                                 }
	      //this braket is done  V    
	                             }
	                             else
	                             {
	                             	cout << huntingTarget << " is not an answer choice, please answer again \n\n";
	                    			x = 1;
	                             }
	                             }while(x == 1);
	 //this braket is done  V                       
	                        }
	                        else
	                        {
	                        	cout << afterNoTame << " is not a valid answer choice, please answer again. ";
								x = 1;
	                        }
	                        }while(x == 1);
	                }
	                else if (useBandages == "dead")
					{
						
					}
					else
					{
						cout << firstDirection << " is not an answer choice, please answer again \n\n";
						x = 1;
					}
					
				}
	            
				else 
				{
					cout << afterFirstSleep << " is not a valid answer choice, please answer again \n\n";
					x = 1;
				}
				}while (x == 1);
	        }
	        else if (afterSwim == "go east")
	        {
	        	cout << "incomplete story line";
	        }
	        else
	        {
	        	cout << afterSwim << " is not an answer choice, please answer again \n\n";
				x = 1;
	        
	        }
			
	       	        	        
			}while(x == 1);
	    }
	    else 
		{
			cout << shipOrNot << " is not an answer choice, please answer again \n\n";
			x = 1;
		}
	}while(x == 1);
	}
	
	else if (firstDirection == "East")
	{
		do
		{
			x = 0;
			cout << "You head east into the forest to look for shelter. The brush is thick, but you see a sort of dirt path. you think that it \n"
					"is probably a game trail. to be continued.";
					
		}while(x == 1);
	}
	else if (firstDirection == "North")
	{
		do
		{
			x = 0;
			cout << "You head north along the beach to search for any suplies that might have washed up on shore. to be continued. \n";
		}while(x == 1);
	}
	else if (firstDirection == "South")
	{
		do
		{
			x = 0;
			cout << "You head south along the beach to search for any suplies that might have washed up on shore. to be continued.\n";
		}while(x == 1);
	}
	else 
	{
		cout << firstDirection << " is not an answer choice, please answer again \n\n";
		x = 1;
	}
	
	}while(x == 1); 
	
} //for loop end
	cout << fixed << showpoint << setprecision(2); 
	if (numLives - z <= 0)
	{
		score = 0;
		cout << "Your score was " << score << " because you died too many times." << endl;
	}
	
	else if(numLives - z > 0)
	{
		if (numLives == 3 || numLives == 5 || numLives == 10)
		{
			cout << "Your score is: " << (100.0 / numLives ) * 100.0 << endl;
		}
		else 
		{
			cout << "Your score is: " << (75.0 / numLives ) * 100.0 << endl;
		}
	}
	
return 0;	

}	

	
	
