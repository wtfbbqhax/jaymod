#ifndef GAME_CMD_NEWS_H
#define GAME_CMD_NEWS_H

///////////////////////////////////////////////////////////////////////////////

class News : public AbstractBuiltin
{
protected:
    PostAction doExecute( Context& );

public:
    News();
    ~News();
};

///////////////////////////////////////////////////////////////////////////////

#endif // GAME_CMD_NEWS_H
