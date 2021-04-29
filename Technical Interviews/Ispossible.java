Question
JULY 22, 2015
HUMAN
QUESTION DESCRIPTION

You are given a pair of integers (x,y). You may perform either of the two operations below,in any order, zero or more times.

1. (x,y) -> (x+y,y)
2. (x,y) -> (x,y+x)

For example, you can start with (1, 4), change it to (5, 4), change that to (5, 9), and then change that again to (5, 14).
You are given four integers: a, b, c, and d. Return “Yes” (without quotes) if it is possible to start with the pair (a, b) and end with the pair (c, d). Otherwise, return “No”.

Method signature: String isitpossible(int a, int b, int c, int d)

Input
Four integers in separate lines.

Output
One string “Yes” or “No”.

Constraints

1≤ a,b,c,d ≤ 1000

Sample Input
1
4
5
9

Sample Output
Yes

Explanation
(1, 4) -> (5, 4) -> (5, 9) .

Solution in Java :

static LinkedList<Pair<Integer,Integer>> pairs = new LinkedList<Pair<Integer, Integer>>();
 
    public static String isItPossible(Integer a, Integer b, Integer c, Integer d){
        pairs.addLast(new Pair<Integer, Integer>(a,b));
        while (!pairs.isEmpty()){
            Pair<Integer,Integer> pair = pairs.poll();
            Integer key = pair.getKey();
            Integer value = pair.getValue();
            if(key.equals(a) &&
                    value.equals(b)){
                return "YES";
            }
            int sum=key+value;
            if (sum<=c){
                pairs.addLast(new Pair<Integer, Integer>(sum,value));
            }
            if (sum<=d){
                pairs.addLast(new Pair<Integer, Integer>(key,sum));
            }
 
        }
 
        return "NO";
    }
