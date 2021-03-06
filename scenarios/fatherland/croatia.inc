    ############################## 
     # Country definition for CRO # 
     ############################## 
  
 
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = CRO 
ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes MOB7 = yes MOB8 = yes RES = yes NEIN = yes } }
    # puppet                 = GER
    # control                = GER
   # Resource Reserves 
   energy                 = 500 
metal                  = 500
rare_materials         = 200
   oil                    = 200
   supplies               = 200 
   money                  = 10 
   manpower               = 30
   capital                = 352 
   diplomacy = 
   { relation = {  tag = GER value = 200  } 
     relation = {  tag = ITA value = 200  } 
   relation = { tag = AXI value = 200 access = yes }
    } 
   SpyInfo                = {  country = "CRO" NumberOfSpies = 7  } 
   nationalprovinces      = {  337 345 344 352 353 355 354 347 357 358 356  351 
   # Fiume
   # 406 
   } 
   ownedprovinces         = {  337 345 344 352 353 355 354 347 357 358 356  351 } 
   controlledprovinces    = {  337 345 344 352 353 355 354 347 357 358 356  351 } 
   claimedprovinces       = {  337 343 344 345 347 350 351 353 354 355 356 357 358  } 
   # Eastern Minor Tech '36 
   # Group C 1936 techs 
   # ###################### 
   techapps               = { 
#Early Infantry Division  
1010 1020 1030 1040 1050 1060 1070 1080 1090
#Early Mountain Division 
1160  1170 1180 1190 1200 1210 1220 1230 1240
#Great War Cavalry Division  
13060 13070 13080 1310 1320 1330 1340 
#Interbellum 1930 Supply 
1910 1920 1930 1940 1950 1960 1970 1980
#Great War Hospital System 
14000 14010 14020
#Engineers
1830 1840 1850 1860
#Tankette 
7600 7610 2620 2010 2630 2640 2646 2650 2030
#Basic Armoured Car  
2860 2870 2880 2020 2150
#Great War Heavy Field Artillery 
2290 2300 2310
#Early Static Anti-Air Artillery 
2800 2450 21180 21190 21200
#Basic Anti-Air Artillery Brigade 
2810 2820 2510
#Early Fighter  
4500 4510 4520 4530 4540 4550 4010 4020
#Interwar Bomber 
4600 4610 4620 4630 4120
#Multirole fighter
4300 4310 4320 4330
#ww1 strategic bomber
4800 4810 4820
#Medicine
5600 5610 5620 5630
#Computers & cryptografi
5310 54010 54020 54030 5316 5326
#Manufactoring
5810 5820 5050 5830 5060
#Mechanized Agriculture 
5700 5710 5010
#Improved Construction Engineering 
5800 5080 5090 
#rocket
5560

# Great War Land Doctrines (entente)
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
#Land Doctrines
6560
#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010  
 }
inventions = { 3000027 }
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 1 
     political_left    = 2
     free_market       = 4 
     freedom           = 3 
     professional_army = 8 
     defense_lobby     = 9 
     interventionism   = 9 
    } 
   headofstate            = {  type = 9 id = 275042  } 
   headofgovernment       = {  type = 9 id = 275002  } 
   foreignminister        = {  type = 9 id = 275003  } 
   armamentminister       = {  type = 9 id = 275004  } 
   ministerofsecurity     = {  type = 9 id = 275005  } 
   ministerofintelligence = {  type = 9 id = 275006  } 
   chiefofstaff           = {  type = 9 id = 275007  } 
   chiefofarmy            = {  type = 9 id = 275008  } 
   chiefofnavy            = {  type = 9 id = 275009  } 
   chiefofair             = {  type = 9 id = 275010  }

   landunit = 
   { location = 347 
     name     = "1. korpusa" 
     id       = {  type = 12607 id = 1  } 
     division = 
     { id       = {  type = 12607 id = 2  } 
       name     = "Poglavnik tjelohranitelj divizija" 
       type     = infantry
       model    = 10 
       strength = 30
       experience = 30
       extra    = artillery
       brigade_model = 6
      }
     division = 
     { id       = {  type = 12607 id = 3  } 
       name     = "1. napad divizija" 
       type     = infantry 
       model    = 9 
       strength = 20
       experience = 30
      }
    }
   landunit = 
   { location = 344 
     name     = "2. korpusa" 
     id       = {  type = 12607 id = 4  } 
     division = 
     { id       = {  type = 12607 id = 5  } 
       name     = "2. divizija" 
       type     = infantry 
       model    = 9 
       strength = 20
       experience = 30
      }
     division = 
     { id       = {  type = 12607 id = 6  } 
       name     = "12. divizija" 
       type     = infantry 
       model    = 9 
       strength = 20
       experience = 30
      }
     division = 
     { id       = {  type = 12607 id = 7  } 
       name     = "14. divizija" 
       type     = infantry 
       model    = 9 
       strength = 20
       experience = 30
      }
     division = 
     { id       = {  type = 12607 id = 8  } 
       name     = "17. divizija" 
       type     = infantry 
       model    = 9 
       strength = 20
       experience = 30
      }
     division = 
     { id       = {  type = 12607 id = 9  } 
       name     = "18. napad divizija" 
       type     = infantry 
       model    = 9 
       strength = 20
       experience = 30
      }
    }
   landunit = 
   { location = 354 
     name     = "3. korpusa" 
     id       = {  type = 12607 id = 10  } 
     division = 
     { id       = {  type = 12607 id = 11  } 
       name     = "3. divizija" 
       type     = infantry 
       model    = 9 
       strength = 40
       experience = 30
      }
     division = 
     { id       = {  type = 12607 id = 12  } 
       name     = "7. gorska divizija" 
       type     = bergsjaeger 
       model    = 9 
       strength = 20
       experience = 30
      }
     division = 
     { id       = {  type = 12607 id = 13  } 
       name     = "8. divizija" 
       type     = infantry 
       model    = 9 
       strength = 20
       experience = 30
      }
     division = 
     { id       = {  type = 12607 id = 14  } 
       name     = "9. gorska divizija" 
       type     = bergsjaeger 
       model    = 9 
       strength = 20
       experience = 30
      }
    }
   landunit = 
   { location = 355 
     name     = "4. korpusa" 
     id       = {  type = 12607 id = 15  } 
     division = 
     { id       = {  type = 12607 id = 16  } 
       name     = "4. divizija" 
       type     = infantry 
       model    = 9 
       strength = 20
       experience = 30
      }
     division = 
     { id       = {  type = 12607 id = 17  } 
       name     = "6. divizija" 
       type     = infantry 
       model    = 9 
       strength = 20
       experience = 30
      }
     division = 
     { id       = {  type = 12607 id = 18  } 
       name     = "15. divizija" 
       type     = infantry 
       model    = 9 
       strength = 20
       experience = 30
      }
    }
   landunit = 
   { location = 345 
     name     = "5. korpusa" 
     id       = {  type = 12607 id = 19  } 
     division = 
     { id       = {  type = 12607 id = 20  } 
       name     = "10. divizija" 
       type     = infantry 
       model    = 9 
       strength = 20
       experience = 30
      }
     division = 
     { id       = {  type = 12607 id = 21  } 
       name     = "11. divizija" 
       type     = infantry 
       model    = 9 
       strength = 20
       experience = 30
      }
     division = 
     { id       = {  type = 12607 id = 22  } 
       name     = "13. divizija" 
       type     = infantry 
       model    = 9 
       strength = 20
       experience = 30
      }
     division = 
     { id       = {  type = 12607 id = 23  } 
       name     = "16. zamjena divizija" 
       type     = militia 
       model    = 3 
       strength = 20
       experience = 30
      }
    }
  airunit =
  { id       = { type = 12607 id = 50 }
    name     = "Hrvatsko Zrakoplovstvo"
    location = 352
    base     = 352
    division =
    { id    = { type = 12607 id = 51 }
      name  = "Hrvatsko Zrakoplovstvo"
      type  = interceptor
      model = 5
      strength = 60
    }
  }
  
  ### Volga Coalition Troops ###
	
landdivision = { dormant = yes id = { type = 12607 id = 100 } name = "Ustaše Volga Odred" type = garrison model = 6 extra = police brigade_model = 2 }

}
