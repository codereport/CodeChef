-- code_report Solution Video
-- Video Link: https://youtu.be/51Bj6NCHKL0
-- Problem Link: https://www.codechef.com/MARCH19B/problems/CHNUM/

solve :: [Int] -> Int -> (Int, Int)
solve xs n
    | a == n || a == 0 = ( n, n )
    | otherwise        = ( max a b, min a b )
        where
            a = length (filter (<0) xs)
            b = n - a
