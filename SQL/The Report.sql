SELECT
  CASE
    WHEN grades.grade < 8 then null
    else students.name
  end,
  grades.grade,students.marks
FROM students JOIN grades ON students.marks>=grades.min_mark and students.marks<=grades.max_mark
order by grades.grade desc,students.name asc;