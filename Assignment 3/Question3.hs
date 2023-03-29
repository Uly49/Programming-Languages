riffle :: [a] -> [a] -> [a]
riffle = go True
    where go _ [] ys = ys
          go _ xs [] = xs
          go True (p:xs) ys = p : go False xs ys
          go False xs (q:ys) = q : go True xs ys
main :: IO ()
main = do
  print(riffle [1,2,3] [4,5,6])