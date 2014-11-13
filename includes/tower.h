//
//  Header.h
//  TEST
//
//  Created by Vlad Vyshnevskyy on 13/11/2014.
//  Copyright (c) 2014 VV-SD. All rights reserved.
//

#ifndef TEST_Header_h
#define TEST_Header_h


typedef struct enemy *enemy;

typedef struct tower {
    int x, y;
    int damage;
    int range;
    int firing;
    int target[2];
} *tower;


#endif
