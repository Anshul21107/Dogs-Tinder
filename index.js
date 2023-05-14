function leap(year) {
    if (year % 4 === 0) {
        if (year % 100) {
            if (year % 400) {
                alert("Yes This year is year is a leap year");
            }
            else {
                alert("No This year is year is not a leap year");
            }
        }
        else {
            alert("Yes This year is year is a leap year");
        }
    }
    else {
        alert("No This year is year is not a leap year");
    }
}
leap(2345);     