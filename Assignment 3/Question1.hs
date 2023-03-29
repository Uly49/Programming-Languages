import Data.Char ()
import Distribution.Simple.Utils (xargs)


-- Question 1

qsortReverse :: Ord a => [a] -> [a]
qsortReverse [] = [] -- base case if the list is empty
qsortReverse (x:xs) = qsortReverse larger ++ [x] ++ qsortReverse smaller -- recursive case
  where
    larger = [a | a <- xs, a >= x] --part list into a sublist
    smaller = [b | b <- xs, b < x] --part list into a sublist

-- main :: [a0]
-- main = do
--   qsortReverse [7,33,40,2,9]
-- qsort :: Ord a => [a] -> [a]
-- qsort [] = []
-- qsort (x:xs) = (qsort greater) ++ [x] ++ (qsort lesser)
--     where
--         lesser = filter (< x) xs
--         greater = filter (>= x) xs

-- Question 2
remove :: Int -> [a] -> [a]
remove _ [] = [] -- recursive function
remove 0 (x:xs) = xs -- if 0th index then return the list except the first element
remove n (x:xs) = x : remove (n-1) xs -- if nth index then make recursive call till it finds nth index element

-- main function
-- main :: IO ()
-- main = do
-- function calls and print the result
-- print(remove 0 [1,2,3,4,5,6])
-- print(remove 2 [1,2,3,4,5,6])
-- print(remove 5 [1,2,3,4,5,6])

-- Question 3
riffle :: [a] -> [a] -> [a]
riffle = go True
    where go _ [] ys = ys
          go _ xs [] = xs
          go True (p:xs) ys = p : go False xs ys
          go False xs (q:ys) = q : go True xs ys
-- main :: IO ()
-- main = do
--   print(riffle [1,2,3] [4,5,6])

-- Question 4



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