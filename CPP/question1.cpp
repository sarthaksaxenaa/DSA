#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>

using namespace std;

void process_student_council_data() {
    int total_number_of_elements;
    cin >> total_number_of_elements;

    vector<int> document_array_sequence(total_number_of_elements);

    for (int index = 0; index < total_number_of_elements; index++) {
        cin >> document_array_sequence[index];
    }

    for (int current_position = 1; current_position < total_number_of_elements - 1; current_position++) {
        if (document_array_sequence[current_position] == -1) {
            document_array_sequence[current_position] = 0;
        }
    }

    int first_element_value = document_array_sequence[0];
    int last_element_value = document_array_sequence[total_number_of_elements - 1];

    if (first_element_value == -1 && last_element_value == -1) {
        document_array_sequence[0] = 0;
        document_array_sequence[total_number_of_elements - 1] = 0;
    } 
    else if (first_element_value == -1) {
        document_array_sequence[0] = last_element_value;
    } 
    else if (last_element_value == -1) {
        document_array_sequence[total_number_of_elements - 1] = first_element_value;
    }

    int final_start_value = document_array_sequence[0];
    int final_end_value = document_array_sequence[total_number_of_elements - 1];
    
    int minimum_calculated_sum = abs(final_end_value - final_start_value);

    cout << minimum_calculated_sum << endl;

    for (int print_index = 0; print_index < total_number_of_elements; print_index++) {
        cout << document_array_sequence[print_index] << " ";
    }
    cout << endl;
}

int main() {
    int count_of_test_cases;
    cin >> count_of_test_cases;
    
    while (count_of_test_cases > 0) {
        process_student_council_data();
        count_of_test_cases--;
    }
    
    return 0;
}