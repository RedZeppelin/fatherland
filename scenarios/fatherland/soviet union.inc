#####################
# Country definition for SOV
# Review by Pako
#####################

#####################
# Country main data 
#####################
  
country = { 
	tag = SOV 
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes MOB7 = yes MOB8 = yes RES = yes } }
	capital = 1138 # Omsk	
	manpower = 3000
	transports = 30 	
	escorts = 15 
	belligerence = 5	
	regular_id = RUS 
	intrinsic_gov_type = leninist 
	dissent = 10
	
	# resources 
	energy = 71235
	metal = 48521
	rare_materials = 5369
	oil = 4250 
	supplies = 7890 
	money = 550 

	# spying
	SpyInfo = { country = "ENG" NumberOfSpies = 4  } 
	SpyInfo = { country = "SPA" NumberOfSpies = 2 }
	SpyInfo = { country = "SOV" NumberOfSpies = 10 }
	SpyInfo = { country = "GER" NumberOfSpies = 3 }
	SpyInfo = { country = "HUN" NumberOfSpies = 4 }
	SpyInfo = { country = "TUR" NumberOfSpies = 7 }
	SpyInfo = { country = "SWE" NumberOfSpies = 2 }
	SpyInfo = { country = "ITA" NumberOfSpies = 2 }

	# policy and government	
	policy = {  
		date = {  year = 0 month = january day = 0  } 
		democratic        = 1 
		political_left    = 10 
		freedom           = 1 
		free_market       = 1 
		professional_army = 7 
		defense_lobby     = 10 
		interventionism   = 5 
    } 

	#headofstate = {  type = 9 id = 30012  } # Molotov
	#headofgovernment = {  type = 9 id = 30017  } # Beria
	headofstate = {  type = 9 id = 30001  } # Kalinin
	headofgovernment = {  type = 9 id = 30002  } # KPSS	
	foreignminister = {  type = 9 id = 30021  } # Molotov
	armamentminister = {  type = 9 id = 30004  } # Kaganovich
	ministerofsecurity = {  type = 9 id = 30028  } # Beria
	ministerofintelligence = {  type = 9 id = 30036  } # Ilichev
	chiefofstaff = {  type = 9 id = 30043  } # Antonov
	chiefofarmy = {  type = 9 id = 30072  } # Zhukov
	chiefofnavy = {  type = 9 id = 30049  } # Kuznetsov
	chiefofair = {  type = 9 id = 30143  } # Zhigarev
	dormant_ministers = {  30003 30005 30007 30009 30006 30010 30026 30027 30032 30033 30048 30011 30046 30076 30144 }
	dormant_leaders = {  30050 30040 30042 30044 30085 30095 30097 30101 30108 30111 30127 30131 30135 30152 30156 30170 30175 30192 30194 30207
						   30217 30220 30229 30232 30243 30255 30267 30272 30315 30316 30338 30339 30403 30409 30416 30454 30472 30477 30484 30487
						   30498 30523 30543 30547 30550 30570 30571 30572 30602 30618 30654 30664 30673 30678 30701 30715 30716 30717 30718 30719
						   30721 30722 30723 30650 30437 30512 30007 30374 30238 30276 30681 30353 30687 30407 30697 30499 30008 
						   30057 30059 30063 30081 30084 30090 30098 30100 30107 30120 30136 30172 30174 30186 30190 30191 30198 30199 30214 30215
						   30226 30242 30258 30263 30269 30275 30277 30296 30302 30324 30326 30345 30381 30391 30399 30401 30411 30419 30442 30445
						   30447 30491 30494 30509 30521 30548 30552 30576 30614 30658 30660 30720 30473 30778 30076 30216 30744 30266 30322 30463
						   30479 30538 30789 30313 30765 30767 30515 30776 30528 30758 30373 30564
	}
							
	# foreign diplomacy										
	diplomacy = { 
		# Neutral AFG ARG BOL BRA CHI TRA DEN ECU IRE MEX MTN PAR PER POR SYR SWE URU PAK
			relation = { tag = AFG value = -100 }
			relation = { tag = CHI value = -100 }
			relation = { tag = SAU value = -50 }
			relation = { tag = SYR value = 30 }	
			relation = { tag = PAK value = -100 }
			relation = { tag = IND value = -50 }
			relation = { tag = ARG value = -50 }
			relation = { tag = URU value = -50 }
			relation = { tag = BOL value = -50 }
			relation = { tag = BRA value = -50 }
			relation = { tag = PAR value = -50 }
			relation = { tag = MEX value = -50 }
			relation = { tag = CHL value = -30 }
			relation = { tag = ECU value = -20 }			
			relation = { tag = DEN value = -100 }
			relation = { tag = TUR value = -25 }
			relation = { tag = IRE value = -10 }
			relation = { tag = TRA value = -50 }
			relation = { tag = POR value = -65 }
			relation = { tag = SPA value = -85 }
			relation = { tag = SCH value = -25 }
			relation = { tag = FRA value = -150 }	
			relation = { tag = SWE value = -10 }
			relation = { tag = SER value = -100 }
		# Allies ENG USA U01 AST NZL CAN SAF BEL EGY IRQ JAP NEP NIC OMN
		relation = { tag = ALS value = 100 access = yes }
			relation = { tag = AST value = -100 }
			relation = { tag = BEL value = -10 }
			relation = { tag = BHU value = -10 }
			relation = { tag = CAN value = -200 }
			relation = { tag = EGY value = -50 }
			relation = { tag = ENG value = 50 }
			relation = { tag = ETH value = -0 }
			relation = { tag = U01 value = 50 }
			relation = { tag = HOL value = -20 }
			relation = { tag = IRQ value = -15 }	
			relation = { tag = NEP value = -20 }
			relation = { tag = NIC value = 20 }
			relation = { tag = NZL value = -20 }
			relation = { tag = OMN value = -10 }	
			relation = { tag = SAF value = -150 }
			relation = { tag = YEM value = -10 }
			relation = { tag = JAP value = -125 }
		# Comintern CHC SOV MON
			relation = { tag = CHC value = 150 }
			# relation = { tag = SOV value = -200 }
			relation = { tag = MON value = 50 }
		# Axis GER SLO ITA BUL CRO FIN MTN U44 UTC U46 U45 U41 U40 U42 WLL FLA HUN ROM SER BLR
			relation = { tag = GER value = -200 }
			relation = { tag = BUL value = -200 }
			relation = { tag = CRO value = -200 }
			relation = { tag = SLO value = -200 }
			relation = { tag = FIN value = -200 }
			relation = { tag = HUN value = -200 }
			relation = { tag = MTN value = -200 }
			relation = { tag = ROM value = -200 }
			relation = { tag = UTC value = -200 }
			relation = { tag = ITA value = -200 }
	}
    
   nationalprovinces = {  1119 534 535 536 537 538 539 540 541 542 543 544 545 546 547 548 549 550 
						  551 552 553 554 555 556 557 558 559 560 561 562 563 564 565 566 567 568 569 570 571 572 573 574 575 576 577 578 579 
						  580 581 582 583 584 585 586 587 588 589 590 591 592 593 594 595 596 597 598 599 600 601 602 603 604 605 606 607 608 609 
						  610 611 612 613 614 615 616 617 618 619 620 621 622 623 624 625 626 627 628 629 630 631 632 633 634 635 636 637 638 639 
						  640 641 642 643 644 645 646 647 648 649 650 651 652 653 654 655 656 657 658 659 660 661 662 663 664 665 666 667 668 669 
						  670 671 672 673 674 675 676 677 678 679 680 681 682 683 684 685 686 687 688 689 690 691 692 693 694 695 696 697 698 699 
						  700 701 702 703 704 705 706 707 708 709 710 711 712 713 714 1069 1070        
						  1126 1127 1128 1129 1130 1131 1132 1133 1134 1135 1136 1137 
						  1138 1139 1140 1141 1142 1143 1144 1145 1146 1147 1148 1149 1150 1151 1152 1153 1154 1155 1156 1157 1158 1161 1162 1163 
						  1164 1165 1166 1167 1177 1178 1179 1180 1181 1182 1183 1184 1541 1542 
						  1169 1168 1170 1176 1171 1174 1175 1188 1187 1185 1190 1195 1194 1192 1196 1193 1191 1189 1186
                        }						 
   ownedprovinces = {  
					   1150 1153 1129
					   1140 685 544 546 545 1138 1139  1136 1135 1151 1130 1137  1132  1133 689 688 542  
                       686 681 543  547 666  1134 706 667 684 680 676  548 660  1149  1141
					   1126 1127 1128               
		   
						#Idel-Ural 
						672 664 #Tatarstan 
						690 1131 # Bashkortostan 
						671 #Udmurt Republic
						673 # Mari El
						687 # Perm Krai

						#Central Asia
						#Kazakhstan
						506 507 505 500 498 504 1114 1117 1118 1116 503 1110 1108 1113 1115 1111 502 499 1109 1112 501 


						#1280 # Occupied East Turkestan
					}  

   controlledprovinces = { 
					   1150 1153 1129
					   1140 685 544 546 545 1138 1139  1136 1135 1151 1130 1137  1132  1133 689 688 542  
                       686 681 543  547 666  1134 706 667 684 680 676  548 660  1149  1141
					   1126 1127 1128               
		   
						#Idel-Ural 
						672 664 #Tatarstan 
						690 1131 # Bashkortostan 
						671 #Udmurt Republic
						673 # Mari El
						687 # Perm Krai

						#Central Asia
						#Kazakhstan
					    500 498 1114 1117 1118 1116 503 1110 1113 1115 1111 502 499 501


						#1280 # Occupied East Turkestan
     }
   claimedprovinces    = { 

 #Claimed
 241 242 244 247 254 245 238 255 257 251 240 248 250 239 249 258 256 253 # Former Polish areas.
 # Estonia
 274 275 271 272 273
 # Latvia
 267 269 268 266 265
 # Lithuania
 259 263 260
 270 264 262
 #Karelia
 530 531 532 534 535 536 537 538 539 540 541 517 519 
 #Tatar land
 670 675 674 672 664 690 1131 687 671 673
 #Bessarabia
 300 302  303 304 305 306
 #Central Asia
 #Kazakhstan
 506 507 505 500 498 504 1114 1117 1118 1116 503 1110 1108 1113 1115 1111 502 499 1109 1112 501 
 #Turkmenistan
 1097 1098   
 #KYG
 1107 1106  
 #UZB
 1101 1102 1100 1103 1099
 #TAD
 1105 1104 	 
   } 


   
   # Soviet Techs
   # ################ 
	techapps = {

	# Manufacturing
	5810 5820 5830 5050 5060 5070 5130
	# Assembly Line
	5140 5160 5180
	# Construction Engineering 
	5800 5080 5090 5100
	# Computers & cryptografi
	5310 54010 54020 54030 5320 5316 5326 5327 5350 5360
	# Agriculture  
	5700 5710 5010 5020 5030
	# Radar
	5410 5416 5417
	# Oil Refining 
	
	# Medicine
	5600 5610 5620 5630
	# Rocket
	5560
	# Specialised Equipment
	5920
	
	# Infantry Division  
	1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1120 1130
	# Mountain Division 
	1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 1270 1280
	# Marines
	1560 1570 1580 1590 1600 1610 1620
	# Paratroopers
	1670 1680
	# Motorized Inf
	1396 1400 1410 1420
	# Cavalry
	13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390 1530
	# Mechanized Inf
	1470
	# Engineers
	1830 1840 1850 1860 1870 1880
	# Supply 
	1910 1920 1930 1940 1950 1960 1970 1980 1990 199100 199130 199140

	# Early/Light Tank 
	7600 7610 2620 2010 2630 2640 2646 2650 2030 2040 2050 2100 2110
	# Medium Tank
	2070 2080 2090 
	# Armoured Car  
	2860 2870 2880 2020 2150
	# Field Artillery 
	2290 2300 2310 2900 2910 2920 2930 2940 2320 2330 2340
	# Self-Propelled Artillery
	2220 2230 2240
	# Self-Propelled Rocket
	2980
	# Anti-tank Artillery
	2400 2410 2420
	# Static Anti-Air Artillery 
	2800 2450 21180 21190 21200 2460
	# Anti-air Brig
	2810 2820 2510 2520 2530
	# Tank Destroyer
	2170 2180 2190
	#Rocket Artillery
	2970
 
 	# Hospital System 
	14000 14010 14020 14030 14040
	# Great War Land Doctrines (central powers)
	6500 6510 6530 6550 6590 6600 6620 6650 6670 6610 6680 6690 6700 6710 6910
	# Land Doctrines
	6570 6300 6900 6310 6320 6330 6340 6350 6370 6360

	# Light Cruiser 
	3110 3120 3130 3140 3150 3160 
	# Battleship 
	3410 3420 3430 3440 3450 3456 3460 3470 3480
	# Battlecruiser  
	3310 3320 3330 3340
	# Heavy Cruiser 
	3210 3220 3230 3240 3250 3260 12020
	# Destroyer 
	3010 3020 3030 3040 3050 3060 3070 12000
	# Submarine 
	3610 3620 3630 3640 3650 3660 3670
	# Light Carrier
	12100 12110 12120 12130
	# Fleet Carrier
	3510
	# Torpedo & ASW 18
	3720 3730 3736 3740 3750 3760 3900 3910
	# Troopships
	3810 3820 3830

	# Naval Doctrines 
	# Theory
	8010 8020 8030 8040 8050 8060 8070 8080
	# Amphib
	82300
	# Logistics
	82500
	# Naval Interdiction
	8500 8510 8550 8560 8600 8610 8520
	# Indirect Approach
	81300 81310 81320 81330 81340 81350 81360
	# Naval Supremacy
	8100 8110 8120 8150 8160 8200 8210 8170

	# CAS
	4400 4170 4280 4450
	# Inteceptor  
	4500 4510 4520 4530 4540 4550 4010 4020 4030 4060
	# Tactical Bomber 
	4600 4610 4620 4630 4120 4130 4140
	# Multirole fighter
	4300 4310 4320 4330 4340 4040 4070 4100
	# Escort Fighter
	4050 4080
	# Strategic bomber
	4800 4810 4820 4220 4230
	# Navalbomber
	4700 4710 4190
	# Transports
	4290 4250
	# Seaplanes
	4740 4750 4760 4770 4780 4790 4850
	
	# Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 
	9010 9040 9050 9060 9070 9080 9090 9100 9110 9120 9130 9140 9150 9160 9170 9180 9190 9200 9210 9220 9230 9240
 	
			# Industry Nuclear 
		5470 5480 5490 5500 # 5510 5520 5530 5540
		# Secret Weapons Nuclear
		# 7170 7180 7190 # 16010	
	} 

inventions = { 3000027 }
   blueprints             = { } 
	peacetime_ic_mod       = 0.7

							
   landunit = 
   {  id       = {  type = 10848 id =  1 } 
     name     = "Raboche-Krest'yanskaya Krasnaya Armiya" 
     location = 706 #Moscow 
     Division = 
     {  id       = {  type = 10848 id = 2  } 
       name     = "Generalnyi Shtab RKKA" 
       strength = 100
       type     = HQ
	   model    = 4	
	   } 
 } 
   landunit = 
   {  id       = {  type = 10848 id =  14 } 
     name     = "1-i Mekhanizirovannyi Korpus" 
     location = 672
      Division = 
     {  id       = {  type = 10848 id = 1400  } 
       name     = "1-ya Tankovaya Diviziya" 
       strength = 65 
       type     = light_armor
	   model    = 1 
      }
      Division = 
     {  id       = {  type = 10848 id = 1401  } 
       name     = "3-ya Tankovaya Diviziya" 
       strength = 65 
       type     = light_armor
	   model    = 1 
      }
      Division = 
     {  id       = {  type = 10848 id = 1402  } 
       name     = "163-ya Motostrelkovaya Diviziya" 
       strength = 80 
       type     = motorized
	   model    = 1 
      }
 }

   landunit = 
   {  id       = {  type = 10848 id =  37 } 
     name     = "50-i Strelkovyi Korpus" 
     location = 673
     Division = 
     {  id       = {  type = 10848 id = 38  } 
       name     = "43-ya Strelkovaya Diviziya" 
       strength = 70 
       type     = infantry 
	   model    = 9
      }
     Division = 
     {  id       = {  type = 10848 id = 39  } 
       name     = "70-ya Strelkovaya Diviziya" 
       strength = 70 
       type     = infantry 
	   model    = 9
      }
     Division = 
     {  id       = {  type = 10848 id = 40  } 
       name     = "123-ya Strelkovaya Diviziya" 
       strength = 70 
       type     = infantry 
	   model    = 9
      }
 }
   landunit = 
   {  id       = {  type = 10848 id =  21 } 
     name     = "14-ya Armiya" 
     location = 546
     Division = 
     {  id       = {  type = 10848 id = 22  } 
       name     = "14-ya Krivorozhskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
      }
     Division = 
     {  id       = {  type = 10848 id = 23  } 
       name     = "52-ya Strelkovaya Diviziya" 
       strength = 70 
       type     = infantry 
	   model    = 9
      }
 }

   landunit = 
   {  id       = {  type = 10848 id =  1420 } 
     name     = "17-i Mekhanizirovannyi Korpus" 
     location = 681
      Division = 
     {  id       = {  type = 10848 id = 1421  } 
       name     = "27-ya Tankovaya Diviziya" 
       strength = 10 
       type     = light_armor
	   model    = 0 
      }
      Division = 
     {  id       = {  type = 10848 id = 1422  } 
       name     = "36-ya Tankovaya Diviziya" 
       strength = 10 
       type     = light_armor
	   model    = 0 
      }
      Division = 
     {  id       = {  type = 10848 id = 1423  } 
       name     = "209-ya Motostrelkovaya Diviziya" 
       strength = 80 
       type     = motorized
	   model    = 1 
      }
 }
   landunit = 
   {  id       = {  type = 10848 id =  1424 } 
     name     = "20-i Mekhanizirovannyi Korpus" 
     location = 676
      Division = 
     {  id       = {  type = 10848 id = 1425  } 
       name     = "26-ya Tankovaya Diviziya" 
       strength = 10 
       type     = light_armor
	   model    = 0 
      }
      Division = 
     {  id       = {  type = 10848 id = 1426  } 
       name     = "38-ya Tankovaya Diviziya" 
       strength = 10 
       type     = light_armor
	   model    = 0 
      }
      Division = 
     {  id       = {  type = 10848 id = 1427  } 
       name     = "210-ya Motostrelkovaya Diviziya" 
       strength = 80 
       type     = motorized
	   model    = 1 
      }
 }
   landunit = 
   {  id       = {  type = 10848 id =  191 } 
     name     = "Zakavkazskyi Voennyi Okrug" 
     location = 1118
     Division = 
     {  id       = {  type = 10848 id = 192  } 
       name     = "Zakavkazskyi Voennyi Okrug" 
       strength = 80 
       type     = HQ
	   model    = 4
	   extra    = anti_air
	   brigade_model = 0
	   }
     Division = 
     {  id       = {  type = 10848 id = 193  } 
       name     = "63-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = bergsjaeger 
	   model    = 11
      }
     Division = 
     {  id       = {  type = 10848 id = 194  } 
       name     = "76-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = bergsjaeger 
	   model    = 11
      }
     Division = 
     {  id       = {  type = 10848 id = 195  } 
       name     = "77-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = bergsjaeger 
	   model    = 11
      }
     Division = 
     {  id       = {  type = 10848 id = 196  } 
       name     = "4-ya Smolenskaya Strelkovaya Diviziya" 
       strength = 70 
       type     = infantry 
	   model    = 9
      }
     Division = 
     {  id       = {  type = 10848 id = 197  } 
       name     = "20-ya Strelkovaya Diviziya" 
       strength = 70 
       type     = bergsjaeger 
	   model    = 9
      }
     Division = 
     {  id       = {  type = 10848 id = 198  } 
       name     = "136-ya Strelkovaya Diviziya" 
       strength = 70 
       type     = infantry 
	   model    = 9
      }
     Division = 
     {  id       = {  type = 10848 id = 199  } 
       name     = "138-ya Strelkovaya Diviziya" 
       strength = 70 
       type     = bergsjaeger 
	   model    = 9
      }
     Division = 
     {  id       = {  type = 10848 id = 200  } 
       name     = "47-ya Strelkovaya Diviziya" 
       strength = 70 
       type     = bergsjaeger 
	   model    = 9
      }
     Division = 
     {  id       = {  type = 10848 id = 201  } 
       name     = "17-ya Gor'kovskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = bergsjaeger 
	   model    = 11
      }
      Division = 
     {  id       = {  type = 10848 id = 202  } 
       name     = "24-ya Kavaleriiskaya Diviziya" 
       strength = 60 
       type     = cavalry
	   model    = 11
	extra = light_armor_brigade
	brigade_model = 3
      }
     Division = 
     {  id       = {  type = 10848 id = 203  } 
       name     = "31-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
      }
     Division = 
     {  id       = {  type = 10848 id = 204  } 
       name     = "9-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = bergsjaeger 
	   model    = 11
      }
 }
   landunit = 
   {  id       = {  type = 10848 id =  1485 } 
     name     = "28-i Mekhanizirovannyi Korpus" 
     location = 1111
      Division = 
     {  id       = {  type = 10848 id = 1486  } 
       name     = "6-ya Tankovaya Diviziya" 
       strength = 65 
       type     = light_armor
	   model    = 0
      }
      Division = 
     {  id       = {  type = 10848 id = 1487  } 
       name     = "54-ya Tankovaya Diviziya" 
       strength = 65 
       type     = light_armor
	   model    = 0 
      }
      Division = 
     {  id       = {  type = 10848 id = 1488  } 
       name     = "236-ya Motostrelkovaya Diviziya" 
       strength = 80 
       type     = motorized
	   model    = 1 
      }
 }
   landunit = 
   {  id       = {  type = 10848 id =  205 } 
     name     = "Arhangelskyi Voennyi Okrug" 
     location = 542
     Division = 
     {  id       = {  type = 10848 id = 206  } 
       name     = "Arhangelskyi Voennyi Okrug" 
       strength = 70 
       type     = HQ
	   model    = 4
	   extra    = anti_air
	   brigade_model = 0
	   }
     Division = 
     {  id       = {  type = 10848 id = 207  } 
       name     = "88-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 9
	   extra    = artillery
	   brigade_model = 8
      }
     Division = 
     {  id       = {  type = 10848 id = 208  } 
       name     = "111-ya Strelkovaya Diviziya" 
       strength = 70 
       type     = infantry 
	   model    = 9
      }
 }
   landunit = 
   {  id       = {  type = 10848 id =  209 } 
     name     = "Moskovskyi Voennyi Okrug" 
     location = 664
     Division = 
     {  id       = {  type = 10848 id = 210  } 
       name     = "Moskovskyi Voennyi Okrug" 
       strength = 80 
       type     = HQ
	   model    = 4
	   extra    = anti_air
	   brigade_model = 1
	   }
     Division = 
     {  id       = {  type = 10848 id = 211  } 
       name     = "118-ya Strelkovaya Diviziya" 
       strength = 70 
       type     = infantry 
	   model    = 9
      }
     Division = 
     {  id       = {  type = 10848 id = 212  } 
       name     = "235-ya Strelkovaya Diviziya" 
       strength = 70 
       type     = infantry 
	   model    = 9
      }
 }
   landunit = 
   {  id       = {  type = 10848 id =  1492 } 
     name     = "4-i Vozdushno-Desantnye Korpus" 
     location = 547
     Division = 
     {  id       = {  type = 10848 id = 1493  } 
       name     = "4-i Vozdushno-Desantnye Korpus" 
       strength = 50 
       type     = paratrooper 
	   model    = 0
      }
 }
   landunit = 
   {  id       = {  type = 10848 id =  1494 } 
     name     = "5-i Vozdushno-Desantnye Korpus" 
     location = 667
     Division = 
     {  id       = {  type = 10848 id = 1495  } 
       name     = "5-i Vozdushno-Desantnye Korpus" 
       strength = 50 
       type     = paratrooper 
	   model    = 0
      }
 }
   landunit = 
   {  id       = {  type = 10848 id =  219 } 
     name     = "Orlovskyi Voennyi Okrug" 
     location = 542
     Division = 
     {  id       = {  type = 10848 id = 220  } 
       name     = "Orlovskyi Voennyi Okrug" 
       strength = 80 
       type     = HQ
	   model    = 4
	   extra    = anti_air
	   brigade_model = 1
	   }
     Division = 
     {  id       = {  type = 10848 id = 221  } 
       name     = "19-ya Voronezhskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   extra    = artillery
	   brigade_model = 8
      }
     Division = 
     {  id       = {  type = 10848 id = 222  } 
       name     = "89-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
      }
     Division = 
     {  id       = {  type = 10848 id = 224  } 
       name     = "120-ya Strelkovaya Diviziya" 
       strength = 70 
       type     = infantry 
	   model    = 9
      }
     Division = 
     {  id       = {  type = 10848 id = 225  } 
       name     = "145-ya Strelkovaya Diviziya" 
       strength = 70 
       type     = infantry 
	   model    = 9
      }
     Division = 
     {  id       = {  type = 10848 id = 227  } 
       name     = "149-ya Strelkovaya Diviziya" 
       strength = 70 
       type     = infantry 
	   model    = 9
      }
     Division = 
     {  id       = {  type = 10848 id = 223  } 
       name     = "217-ya Strelkovaya Diviziya" 
       strength = 70 
       type     = infantry 
	   model    = 9
      }
     Division = 
     {  id       = {  type = 10848 id = 226  } 
       name     = "222-ya Strelkovaya Diviziya" 
       strength = 70 
       type     = infantry 
	   model    = 9
      }
 }
   landunit = 
   {  id       = {  type = 10848 id =  229 } 
     name     = "Sredneaziatskyi Voennyi Okrug" 
     location = 1110
     Division = 
     {  id       = {  type = 10848 id = 230  } 
       name     = "Sredneaziatskyi Voennyi Okrug" 
       strength = 70 
       type     = HQ
	   model    = 4
	   extra    = anti_air
	   brigade_model = 0
	   }
     Division = 
     {  id       = {  type = 10848 id = 232  } 
       name     = "238-ya Strelkovaya Diviziya" 
       strength = 70 
       type     = infantry 
	   model    = 9
      }
 }
   landunit = 
   {  id       = {  type = 10848 id =  233 } 
     name     = "58-i Strelkovyi Korpus" 
     location = 500
     Division = 
     {  id       = {  type = 10848 id = 231  } 
       name     = "68-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = bergsjaeger 
	   model    = 11
      }
     Division = 
     {  id       = {  type = 10848 id = 234  } 
       name     = "83-ya Strelkovaya Diviziya" 
       strength = 70 
       type     = bergsjaeger 
	   model    = 9
      }
     Division = 
     {  id       = {  type = 10848 id = 235  } 
       name     = "194-ya Strelkovaya Diviziya" 
       strength = 70 
       type     = bergsjaeger 
	   model    = 9
      }
  Division = #SAVO
     {  id       = {  type = 10848 id = 236  } 
       name     = "18-ya Turkmenskaya Kavaleriiskaya Diviziya" 
       strength = 60 
       type     = cavalry
	   model    = 9
     }
  Division = #SAVO
     {  id       = {  type = 10848 id = 237  } 
       name     = "20-ya Tadzhikskaya Kavaleriiskaya Diviziya" 
       strength = 60 
       type     = cavalry
	   model    = 9
     }
  Division = #SAVO
     {  id       = {  type = 10848 id = 238  } 
       name     = "21-ya Kavaleriiskaya Diviziya" 
       strength = 60 
       type     = cavalry
	   model    = 9
     }
 }
   landunit = 
   {  id       = {  type = 10848 id =  1506 } 
     name     = "27-i Mekhanizirovannyi Korpus" 
     location = 1110
      Division = 
     {  id       = {  type = 10848 id = 1507  } 
       name     = "9-ya Tankovaya Diviziya" 
       strength = 40 
       type     = light_armor
	   model    = 0
      }
      Division = 
     {  id       = {  type = 10848 id = 1508  } 
       name     = "53-ya Tankovaya Diviziya" 
       strength = 40 
       type     = light_armor
	   model    = 0 
      }
      Division = 
     {  id       = {  type = 10848 id = 1509  } 
       name     = "221-ya Motostrelkovaya Diviziya" 
       strength = 50 
       type     = motorized
	   model    = 1 
      }
 }
   landunit = 
   {  id       = {  type = 10848 id =  242 } 
     name     = "Zabaikalskyi Voennyi Okrug" 
     location = 1140
     Division = 
     {  id       = {  type = 10848 id = 243  } 
       name     = "Zabaikalskyi Voennyi Okrug" 
       strength = 80 
       type     = HQ
	   model    = 4
	   extra    = anti_air
	   brigade_model = 0
	   }
     Division = 
     {  id       = {  type = 10848 id = 244  } 
       name     = "93-ya Vostochno-Sibir. Strelkovaya Diviziya" 
       strength = 70 
       type     = infantry 
	   model    = 9
      }
 }
   landunit = 
   {  id       = {  type = 10848 id =  239 } 
     name     = "12-i Strelkovyi Korpus" 
     location = 498
     Division = 
     {  id       = {  type = 10848 id = 240  } 
       name     = "65-ya Strelkovaya Diviziya" 
       strength = 70 
       type     = infantry 
	   model    = 9
      }
     Division = 
     {  id       = {  type = 10848 id = 241  } 
       name     = "94-ya Strelkovaya Diviziya" 
       strength = 70 
       type     = infantry 
	   model    = 9
      } 
 }
   landunit = 
   {  id       = {  type = 10848 id =  1516 } 
     name     = "45-i Strelkovyi Korpus" 
     location = 660
     Division = 
     {  id       = {  type = 10848 id = 250  } 
       name     = "187-ya Strelkovaya Diviziya" 
       strength = 70 
       type     = infantry 
	   model    = 9
      }
     Division = 
     {  id       = {  type = 10848 id = 251  } 
       name     = "227-ya Strelkovaya Diviziya" 
       strength = 70 
       type     = infantry 
	   model    = 9
      }
     Division = 
     {  id       = {  type = 10848 id = 252  } 
       name     = "232-ya Strelkovaya Diviziya" 
       strength = 70 
       type     = infantry 
	   model    = 9
      }
 }
   landunit = 
   {  id       = {  type = 10848 id =  1517 } 
     name     = "67-i Strelkovyi Korpus" 
     location = 666
     Division = 
     {  id       = {  type = 10848 id = 253  } 
       name     = "102-ya Strelkovaya Diviziya" 
       strength = 70 
       type     = infantry 
	   model    = 9
      }
     Division = 
     {  id       = {  type = 10848 id = 254  } 
       name     = "132-ya Strelkovaya Diviziya" 
       strength = 70 
       type     = infantry 
	   model    = 9
      }
     Division = 
     {  id       = {  type = 10848 id = 255  } 
       name     = "151-ya Strelkovaya Diviziya" 
       strength = 70 
       type     = infantry 
	   model    = 9
      }
 }
   landunit = 
   {  id       = {  type = 10848 id =  1537 } 
     name     = "Uralskyi Voennyi Okrug" 
     location = 1151
     Division = 
     {  id       = {  type = 10848 id = 1538  } 
       name     = "Uralskyi Voennyi Okrug" 
       strength = 60 
       type     = HQ
	   model    = 4
	   extra    = anti_air
	   brigade_model = 0
	   }
 }
   landunit = 
   {  id       = {  type = 10848 id =  1539 } 
     name     = "Sibirskyi Voennyi Okrug" 
    location = 500
   Division = 
     {  id       = {  type = 10848 id = 1540  } 
       name     = "Sibirskyi Voennyi Okrug" 
       strength = 60 
      type     = HQ
	   model    = 4
	   extra    = anti_air
	   brigade_model = 0
	   }
}

# Air OOB
#MVO
airunit = { 
	id = { type = 10848 id = 7026 } 
	name = "Pribaltii'skii Front Vozdushnogo Komandovaniya" 
	location = 1130 
	base = 1130 

	division = { 
	id = { type = 10848 id = 7027 } 
		name = "6.LBABR" 
		strength = 80 
		type = multi_role 
		model = 4 
			}
	division = { 
	id = { type = 10848 id = 7028 } 
		name = "7.IABR" 
		strength = 80 
		type = interceptor 
		model = 7 
			}
	}
airunit = { 
	id = { type = 10848 id = 7037 } 
	name = "Zapadnyi Front Vozdushnogo Komandovaniya" 
	location = 666
	base = 666

	division = { 
	id = { type = 10848 id = 7038 } 
		name = "9.LBABR" 
		strength = 80 
		type = multi_role 
		model = 4 
			}
	division = { 
	id = { type = 10848 id = 7039 } 
		name = "10.IABR" 
		strength = 80 
		type = interceptor 
		model = 7 
			}
	division = { 
	id = { type = 10848 id = 7032 } 
		name = "28.TBABR" 
		strength = 80 
		type = tactical_bomber 
		model = 5 
			}
	}
airunit = { 
	id = { type = 10848 id = 7048 } 
	name = "Yugo-Zapadnogo Fronta Vozdushnogo Komandovaniya" 
	location = 706
	base = 706

	division = { 
	id = { type = 10848 id = 7049 } 
		name = "14.LBABR" 
		strength = 80 
		type = multi_role 
		model = 5 
			}
	division = { 
	id = { type = 10848 id = 7050 } 
		name = "15.IABR" 
		strength = 80 
		type = interceptor 
		model = 7 
			}
	division = { 
	id = { type = 10848 id = 7046 } 
		name = "37.TBABR" 
		strength = 80 
		type = tactical_bomber 
		model = 5 
			}
	division = { 
	id = { type = 10848 id = 7047 } 
		name = "34.TBABR" 
		strength = 80 
		type = strategic_bomber 
		model = 2 
			}
	}
airunit = { 
	id = { type = 10848 id = 7068 } 
	name = "Moskva Vozdushnogo Komandovaniya" 
	location = 706
	base = 706

	division = { 
	id = { type = 10848 id = 7071 } 
		name = "46./48.ABRON" 
		strength = 70 
		type = transport_plane 
		model = 1
			}
	division = { 
	id = { type = 10848 id = 7072 } 
		name = "49./50.ABRON" 
		strength = 70 
		type = transport_plane 
		model = 1
			}
	division = { 
	id = { type = 10848 id = 7065 } 
		name = "47.LSHABR" 
		strength = 80 
		type = cas 
		model = 1 
			}
	}


# Naval OOB

	navalunit = { # Dushenov K.I.
		id = { type = 10848 id = 5400 } 
		name = "Severnaya Voennaya Flotiliya" 
		location = 542 
		base = 542 
		division = { 
			id = { type = 10848 id = 5401 } 
			name = "1. Divizion Esmintsev" 
			type = destroyer 
			model = 3 
			} 
		division = { 
			id = { type = 10848 id = 6009 } 
			name = "2. Divizion Esmintsev" 
			type = destroyer 
			model = 3 
			}
		division = { 
			id = { type = 10848 id = 5402 } 
			name = "1. Divizion Podlodok" 
			type = submarine 
			model = 2 
			}
		division = { 
			id = { type = 10848 id = 6008 } 
			name = "2. Divizion Podlodok" 
			type = submarine 
			model = 2 
			}
		division = { 
			id = { type = 10848 id = 5153 } 
			name = "3. Divizion Podlodok" 
			type = submarine 
			model = 3 
			} 
		} 	
	navalunit = { # Galler L.M.
		id = { type = 10848 id = 5100 } 
		name = "Krasnoznamenny Baltijsky Flot" 
		location = 542 
		base = 542 
		division = { 
			id = { type = 10848 id = 5101 } 
			name = "Marat" 
			type = battleship 
			model = 2 
			extra1 = floatplane
			brigade_model1 = 4
			extra2 = naval_improved_hull_l
			brigade_model2 = 0
			extra3 = naval_fire_controll_l
			brigade_model3 = 0
			extra4 = naval_anti_air_l
			brigade_model4 = 0			
			} 
		division = { 
			id = { type = 10848 id = 5102 } 
			name = "Oktyabrskaya Revolutsiya" 
			type = battleship 
			model = 2 
			extra1 = floatplane
			brigade_model1 = 4
			extra2 = naval_improved_hull_l
			brigade_model2 = 0
			extra3 = naval_fire_controll_l
			brigade_model3 = 0
			extra4 = naval_anti_air_l
			brigade_model4 = 0			
			} 
		division = { 
			id = { type = 10848 id = 6000 } 
			name = "Kirov" 
			type = heavy_cruiser
			model = 5 
			extra1 = floatplane
			brigade_model1 = 4
			} 
		division = { 
			id = { type = 10848 id = 8501 } 
			name = "Maxim Gorky" 
			type = heavy_cruiser
			model = 5 
			extra1 = floatplane
			brigade_model1 = 4
			} 
		division = { 
			id = { type = 10848 id = 5103 } 
			name = "3. Divizion Esmintsev" 
			type = destroyer 
			model = 3 
			} 
		division = { 
			id = { type = 10848 id = 5104 } 
			name = "4. Divizion Esmintsev" 
			type = destroyer 
			model = 3 
			} 
		division = { 
			id = { type = 10848 id = 5206 } 
			name = "5. Divizion Esmintsev" 
			type = destroyer 
			model = 3 
			} 
		division = { 
			id = { type = 10848 id = 5500 } 
			name = "10. Divizion Esmintsev" 
			type = destroyer 
			model = 3 
			} 
		division = { 
			id = { type = 10848 id = 5501 } 
			name = "11. Divizion Esmintsev" 
			type = destroyer 
			model = 3 
			} 
		division = { 
			id = { type = 10848 id = 5154 } 
			name = "4. Divizion Podlodok" 
			type = submarine 
			model = 3 
			}
		division = { 
			id = { type = 10848 id = 6003 } 
			name = "5. Divizion Podlodok" 
			type = submarine 
			model = 2 
			}
		division = { 
			id = { type = 10848 id = 5161 } 
			name = "6. Divizion Podlodok" 
			type = submarine 
			model = 2 
			} 
		division = { 
			id = { type = 10848 id = 5162 } 
			name = "7. Divizion Podlodok" 
			type = submarine 
			model = 3 
			}
		division = { 
			id = { type = 10848 id = 5163 } 
			name = "8. Divizion Podlodok" 
			type = submarine 
			model = 3 
			}
		division = { 
			id = { type = 10848 id = 5171 } 
			name = "9. Divizion Podlodok" 
			type = submarine 
			model = 2 
			}
		division = { 
			id = { type = 10848 id = 5301 } 
			name = "10. Divizion Podlodok" 
			type = submarine 
			model = 3 
			} 
		}
	
	# Starting Build Queue 
	# Nothing
 }
