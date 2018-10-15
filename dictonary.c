
int size = 10;
int Key[size];
int Values[size];
int i = 0, p = 0;
int pos[size];

void add(int key, int val = 0)
{
    int boolean = 0;

    if (i >= size)
    {
        adjustSize_of_Dict();
    }
    for (int p = 0; p < size; p++)
    {
        if (i == pos[p])
            boolean = 1;
    }
    if (boolean)
    {
        i += 1;
        add(key, val);
    }
    else
    {
        Key[i] = key;
        Values[i] = val
            i += 1;
    }
}

void add(int key, int val = 0, int pos)
{
    if (i >= size
    {
        adjustSize_of_Dict()
    }
    if (p >= size
    {
        adjustSize_of_Pos();
    }

    Key[pos] = key;
    Values[i] = val;
    pos[p] = pos;
    p += 1;
}

void adjustSize_of_Dict()
{
    size += 10;
    int tempDict[size];
    int tempVal[size];

    for (int j = 0; j < size; j++)
    {
        tempDict[j] = Key[j];
        tempVal[j] = Values[j];
    }

    Key = tempDict;
    Values = tempVal;
}

void adjustSize_of_Pos()
{
    int tempPos[size];

    for (int j = 0; j < size; j++)
    {
        tempPos[j] = pos[j];
    }

    pos = tempPos;
}