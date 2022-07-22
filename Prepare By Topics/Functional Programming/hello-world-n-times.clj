(defn hello_word_n_times [n]
  (when (not (zero? n))
    (do (hello_word_n_times (dec n))
        (println "Hello World"))))

(def n (Integer/parseInt (read-line)))
(hello_word_n_times n)
