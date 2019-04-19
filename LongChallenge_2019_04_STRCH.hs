-- code_report Solution
-- Video Link: https://youtu.be/56OebnRN6eQ
-- Problem Link: https://www.codechef.com/APRIL19B/problems/STRCH/

import Control.Monad

-- from Data.List.HT (utility-ht)
chop :: (a -> Bool) -> [a] -> [[a]]
chop p =
   uncurry (:) .
   foldr (\ x ~(y,ys) -> if p x then ([],y:ys) else ((x:y),ys) ) ([],[])

second xs = map fst $ filter (even . snd) $ zip xs [1..]
format = map (\a -> (init (init a), last a))

sumN :: Int -> Int
sumN n = div (n*(n+1)) 2

solve :: (String, Char) -> Int
solve (xs, c) = sumN (length xs) - (sum $ map (sumN . length) ys)
    where ys = chop (==c) xs

main :: IO ()
main = do
    t <- readLn :: IO Int
    vs <- replicateM (2 * t) $ getLine
    mapM_ print $ map solve $ format $ second vs
