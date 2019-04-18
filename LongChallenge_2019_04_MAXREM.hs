-- code_report Solution
-- Video Link: https://youtu.be/JT3AYsVtYKM
-- Problem Link: https://www.codechef.com/APRIL19B/problems/MAXREM/

import Control.Monad
import Data.List
import Data.Maybe
import Data.Char 

import qualified Data.ByteString.Char8 as B
readInt = readLn :: IO Int
readInts = map ( fst . fromJust . B.readInt ) . B.words <$> B.getLine

unique = map head . group . sort

solve :: [Int] -> Int
solve xs = if length ys == 1 then 0 else last $ init ys
    where ys = unique xs

main :: IO ()
main = do
    _ <- readInt
    v <- readInts
    print $ solve v 
