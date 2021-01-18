int rollDie(unsigned int sides){
    srand((unsigned int)time(0));
    int roll;
    roll = rand() % sides + 1;
    return roll;
}
