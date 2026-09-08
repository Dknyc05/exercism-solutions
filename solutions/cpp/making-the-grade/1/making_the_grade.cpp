#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    // TODO: Implement round_down_scores

    std::size_t size = student_scores.size();
    std::vector<int> roundScore(size);
    for(std::size_t i = 0; i < size; i++) {
        int round = static_cast<int> (student_scores[i]);
        roundScore[i] = round;
    }
    return roundScore;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    // TODO: Implement count_failed_students
    int fail = 0;
    std::size_t size = student_scores.size();

    for(std::size_t i = 0; i < size; i++) {
        if (student_scores[i] <= 40) {
            fail++;
        }
    }
    
    return fail;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    // TODO: Implement letter_grades
    int interval = (highest_score - 40) / 4;

    std::array<int,4> grade = {0};
    int multiplier = 0;

    for (std::size_t i = 0; i < 4; i ++ ) {
        grade[i] = 41 + (interval * multiplier++);
    }
    
    return grade;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement student_ranking
    std::size_t size = student_scores.size();
    std::vector<std::string> rank(size);

    for (size_t i = 0; i < size;i++) {
        rank[i] = std::to_string(i + 1) + ". " + student_names[i] + ": " + std::to_string(student_scores[i]);
    }
    return rank;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
    // TODO: Implement perfect_score
    std::size_t size = student_scores.size();
    for (std::size_t i = 0; i < size; i++) {
        if (student_scores[i] == 100) {
            return student_names[i];
        }
    }
    return "";
}
