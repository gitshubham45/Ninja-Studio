int answer=0;
while(haystack>0)
{
    int m = haystack%10;
    if(m==needle)
    {
        answer++;
    }
    haystack/=10;
}
