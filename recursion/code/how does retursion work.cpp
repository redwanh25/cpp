void function(int i, int n) {
    if(i<=n) {
        function(i+1, n);
        printf("%d ", i);
    }
}

Explanation might look like this:


01|call function1 with i=1
02|    call function2 with i=2
03|        call function3 with i=3
04|            call function4 with i=4
05|                call function5 with i=5
06|                    call function6 with i=6
07|                        i breaks condition, no more calls
08|                    return to function5
09|                    print 5
10|                return to function4
11|                print 4
12|            return to function3
13|            print 3
14|        return to function2
15|        print 2
16|    return to function1
17|    print 1
18|return to main, done!


Left side number shows the execution steps, so from the above program,
we get, 5 4 3 2 1. So indeed it ran on reverse direction...

reference: http://zobayer.blogspot.com/2009/12/cse-102-attacking-recursion.html
