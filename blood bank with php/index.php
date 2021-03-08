<?php 
    session_start();

    ?>
<!DOCTYPE html>
<html>
<!-------header---->
<head>
<title>Bloodbank | home page</title>
<meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <meta http-equiv="X-UA-Compatible" content="ie=edge" />
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/4.5.0/css/bootstrap.min.css">
    <script src="https://cdnjs.cloudflare.com/ajax/libs/popper.js/1.16.0/umd/popper.min.js"></script>
    <script src="https://maxcdn.bootstrapcdn.com/bootstrap/4.5.0/js/bootstrap.min.js"></script>
    <link rel="stylesheet" type="text/css" href="../library/css/bootstrap.min.css"/>
    <script type="text/javascript" src="../library/js/jquery-3.2.1.min.js"></script>
    <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.5.1/jquery.min.js"></script>
    <script src="https://stackpath.bootstrapcdn.com/bootstrap/4.5.0/js/bootstrap.min.js"></script>
    <script src="https://kit.fontawesome.com/a076d05399.js"></script>
    <link href="css/style.css" rel="stylesheet"/>
    <link rel="shortcut icon" type="image/jpeg" href="image/b.jpg">
    </head>

<body>

    <!--------------menu section---------->

    <nav class="navbar navbar-expand-sm navbar-light bg-light sticky-top">
    <div class="container">
        <a class="navbar-brand" href="index.php">
            <img src="image/b.jpg" width="30" height="30" class="rounded-circle">Blood Bank</a>

          <button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#collapsibleNavbar"><i class="fas fa-align-left"></i></span>
          </button>

          <div class="collapse navbar-collapse" id="collapsibleNavbar">

        </div>
    </div>

    <ul class="navbar-nav ml-auto">
            <li class="nav-item">
                <a class="nav-link btn btn-light" href="abs.php">Available blood samples</a>
            </li>
            <li class="nav-item">
                <a class="nav-link btn btn-light" href="register.php">Register</a>
            </li>
            <li class="nav-item">
                <a class="nav-link btn btn-light" href="login.php">Login</a>
            </li>
        </ul>

</nav>
<br>
<br>
<br>

<!--------body--------------->
<div class="row justify-content-center">
            <div class="col-xl-3 col-lg-3 col-md-4 col-sm-5 col-xs-6 mb-5" style="width: 60%">
                <div class="card">
                    <img src="image/bg.png" class="card-img-top">
                </div>
            </div>

       <div class="col-lg-9">
            <div class="row">
            <div class="col-xl-4 col-lg-4 col-md-6 col-sm-6 col-xs-12 mb-5">
                <div class="card">
                    <div class="card-header text-center">A+</div>
                    <div class="card-body">
                        If you are A+: You can give blood to A+ and AB+. You can receive blood from A+, A-, O+ and O-
                    </div>
                </div>
            </div>
            <div class="col-xl-4 col-lg-4 col-md-6 col-sm-6 col-xs-12 mb-5">
                <div class="card">
                    <div class="card-header text-center">A-</div>
                    <div class="card-body">
                        If you are A-: You can give blood to A-, A+, AB- and AB+. You can receive blood from A- and O-. 
                    </div>
                </div>
            </div>
            <div class="col-xl-4 col-lg-4 col-md-6 col-sm-6 col-xs-12 mb-5">
                <div class="card">
                    <div class="card-header text-center">B+</div>
                    <div class="card-body">
                         You can give blood to A+ and AB+. You can receive blood from A+, A-, O+ and O-.
                    </div>
                </div>
            </div>
            <div class="col-xl-4 col-lg-4 col-md-6 col-sm-6 col-xs-12 mb-5">
                <div class="card">
                    <div class="card-header text-center">B-</div>
                    <div class="card-body">
                        If you are B-: You can give blood to B-, B+, AB+ and AB-, You can receive blood from B- and O-.You can give blood to B+ and AB+.
                    </div>
                </div>
            </div>
            <div class="col-xl-4 col-lg-4 col-md-6 col-sm-6 col-xs-12 mb-5">
                <div class="card">
                    <div class="card-header text-center">AB+</div>
                    <div class="card-body">
                         People with AB+ blood can receive red blood cells from any blood type. This means that demand for AB+ can donate with AB only.
                    </div>
                </div>
            </div>
            <div class="col-xl-4 col-lg-4 col-md-6 col-sm-6 col-xs-12 mb-5">
                <div class="card">
                    <div class="card-header text-center">AB-</div>
                    <div class="card-body"> 
                         AB- patients can receive red blood cells from all negative blood types.
                         AB- can give red blood cells to both AB- and AB+ blood types.
                    </div>
                </div>
            </div>
            <div class="col-xl-4 col-lg-4 col-md-6 col-sm-6 col-xs-12 mb-5">
                <div class="card">
                    <div class="card-header text-center">O+</div>
                    <div class="card-body">
                        Blood O+ can donate to A+, B+, AB+ and O+ Blood
                        Group O can donate red blood cells to anybody. It's the universal donor.
                    </div>
                </div>
            </div>
            <div class="col-xl-4 col-lg-4 col-md-6 col-sm-6 col-xs-12 mb-5">
                <div class="card">
                    <div class="card-header text-center">O-</div>
                    <div class="card-body">
                        O- can donate to A+, A-, B+, B-, AB+, AB-, O+ and O- Blood
                        People with O negative blood can only receive red cell donations from O negative donors.
                    </div>
                </div>
            </div>
            <div class="col-xl-4 col-lg-4 col-md-6 col-sm-6 col-xs-12 mb-5">
                <div class="card">
                    <div class="card-header text-center">Admin contact</div>
                    <div class="card-body">
                        <i class="fa fa-envelope"> </i> <a > poushy785@gmail.com</a><br><br>
                        <i class="fa fa-mobile"> </i> <a > +880 12345</a><br><br>
                    </div>
                </div>
            </div>
            </div>
            </div>

        </div>
    </body>

    <!--------------footer section----------------->
    <footer class="footer text-center bg-light">
    © Copyright <span id="demo"></span> <span class="brand">Blood Bank. </span> All Rights Reserved.
    <p>Created by Lamisha Haque Poushy</p>
    <script>
        date = new Date();
        document.getElementById("demo").innerHTML=date.getFullYear();
    </script>
</footer>


</html>