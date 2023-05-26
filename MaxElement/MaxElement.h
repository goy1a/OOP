#ifndef PUKIPUK4_MAXELEMENT_H
#define PUKIPUK4_MAXELEMENT_H

class maxElem {
        private:
        int arr;
        public:
        static void get_arr();

        template<typename T>
        static T max(T *arr){

            int len_arr = sizeof(arr);
            int max_el = 0;

            for(int i = 0; i < len_arr ; i++){
                if (arr[i] > arr[i+1])
                    max_el = arr[i];

            }
            return max_el;
        }

};

#endif //PUKIPUK4_MAXELEMENT_H
