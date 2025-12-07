# Использование SQLite в C++
1. Зависимости
Сначала установите библиотеку SQLite. Убедитесь, что у вас есть файл заголовка sqlite3.h и библиотека sqlite3.lib (или аналогичные для вашей системы).
2. Основные операции

Операции с SQLite включают:

    - Создание базы данных.
    - Создание таблиц.
    - Вставка, выборка, обновление и удаление данных.


### Вот краткий пример, как можно использовать SQLite для хранения контактов:

```
#include <iostream>
#include <sqlite3.h>

// Функция для обработки ошибок
void checkSQLiteResult(int result) {
    if (result != SQLITE_OK) {
        std::cerr << "Ошибка: " << sqlite3_errmsg(nullptr) << std::endl;
        sqlite3_close(nullptr);
        exit(1);
    }
}

int main() {
    sqlite3* db;
    int result;

    // Создайте базу данных
    result = sqlite3_open("contacts.db", &db);
    checkSQLiteResult(result);

    // Создайте таблицу для контактов
    const char* createTableSQL = "CREATE TABLE IF NOT EXISTS Contacts (id INTEGER PRIMARY KEY, name TEXT, note TEXT);";
    result = sqlite3_exec(db, createTableSQL, nullptr, nullptr, nullptr);
    checkSQLiteResult(result);

    // Вставьте контакт
    const char* insertSQL = "INSERT INTO Contacts (name, note) VALUES ('Иван', 'Другая заметка');";
    result = sqlite3_exec(db, insertSQL, nullptr, nullptr, nullptr);
    checkSQLiteResult(result);

    // Закройте базу данных
    sqlite3_close(db);
    std::cout << "База данных создана и контакт добавлен." << std::endl;

    return 0;
}
```
3. Ключевые моменты
   Создание базы данных: SQLite создаёт файл локальной базы данных.
   Таблицы: В этом примере создаётся таблица для хранения контактов с полями id, name и note.
   Запись данных: Используйте SQL-запросы для вставки, обновления и выборки данных.

4. Импорт данных
Для импорта данных из файла можно прочитать файл с контактами и вставить данные в базу данных с помощью SQL-запросов в цикле.
Пример для импорта

## Если у вас есть файл формата CSV:
```
#include <fstream>
#include <sstream>

// Функция для импорта данных из файла
void importContacts(sqlite3* db, const std::string& filename) {
    std::ifstream file(filename);
    std::string line;
    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string name, note;

        std::getline(ss, name, ',');
        std::getline(ss, note);

        std::string insertSQL = "INSERT INTO Contacts (name, note) VALUES ('" + name + "', '" + note + "');";
        sqlite3_exec(db, insertSQL.c_str(), nullptr, nullptr, nullptr);
    }
}
```
## Заключение
Использование SQLite предоставляет вам мощный инструмент для работы с данными в мессенджере. Он позволяет легко управлять контактами и их заметками, обеспечивая простоту в импорте/экспорте данных.