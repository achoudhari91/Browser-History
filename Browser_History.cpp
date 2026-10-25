#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    stack<string> history;
    int choice;
    string url;

    do {
        cout << "\n--- Student Portal Browser History ---\n";
        cout << "1. Visit New Page\n";
        cout << "2. Go Back\n";
        cout << "3. Display Current Page\n";
        cout << "4. Show Browsing History\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter page URL: ";
                cin >> url;
                history.push(url);
                cout << "Page visited successfully!\n";
                break;

            case 2:
                if (!history.empty()) {
                    cout << "Going back from: "
                         << history.top() << endl;
                    history.pop();

                    if (!history.empty())
                        cout << "Previous page: "
                             << history.top() << endl;
                    else
                        cout << "No previous page available.\n";
                } else {
                    cout << "Browsing history is empty!\n";
                }
                break;

            case 3:
                if (!history.empty())
                    cout << "Current page: "
                         << history.top() << endl;
                else
                    cout << "No page is currently open.\n";
                break;

            case 4:
                if (!history.empty()) {
                    stack<string> temp = history;
                    cout << "Browsing History (Newest First):\n";

                    while (!temp.empty()) {
                        cout << temp.top() << endl;
                        temp.pop();
                    }
                } else {
                    cout << "Browsing history is empty!\n";
                }
                break;

            case 5:
                cout << "Exiting Student Portal...\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 5);

    return 0;
}
