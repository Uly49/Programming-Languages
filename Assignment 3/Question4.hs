import Data.Char ()
import Distribution.Simple.Utils (xargs)


msort :: Ord a => [a] -> [a]
msort [] = []
msort [a] = [a]
msort as = merge(msort start) (msort end)
           where (start, end) = halve as

halve    :: [a] -> ([a], [a])
halve xs = splitAt halfSize xs
           where halfSize = length xs `div` 2

merge :: Ord a => [a] -> [a] -> [a]
merge x [] = x
merge [] y = y
merge (x:xs) (y:ys) | x <= y = x:merge xs (y:ys)
                    | otherwise = y:merge (x:xs) ys

