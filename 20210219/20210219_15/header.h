struct tagTMyTime
{
    int hours;
    int minutes;
    int seconds;
};
void fixTime(struct tagTMyTime *variable);
void addSeconds(struct tagTMyTime *variable, int seconds);
void addMinnutes(struct tagTMyTime *variable, int minutes);
void addHours(struct tagTMyTime *variable, int hours);
int seconds(struct tagTMyTime *variable);
struct tagTMyTime secondsIntoTime(int seconds);
struct tagTMyTime addTwoTimers(struct tagTMyTime *variable1, struct tagTMyTime *variable2);
