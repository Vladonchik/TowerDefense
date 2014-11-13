//
//  Enemy.h
//  TEST
//
//  Created by Vlad Vyshnevskyy on 13/11/2014.
//  Copyright (c) 2014 VV-SD. All rights reserved.
//

#ifndef TEST_Enemy_h
#define TEST_Enemy_h

typedef struct tower *tower;

typedef struct enemy {
    int x, y;
    int pathProgress;
    int health;
    int speed;
} *enemy;


#endif
