(function($) {
  Drupal.behaviors.InflactionCalculator = {
    attach: function (context, settings) {
    	
    }
  };
})(jQuery);

var CL_fact = 1;
function cl_calculateInflaction() {
  var CL_current = document.getElementById("CL_current");
  var CL_roi = document.getElementById("CL_roi");
  var CL_time = document.getElementById("CL_time");
  var CL_tax = document.getElementById("CL_tax");
  var CL_inf = document.getElementById("CL_inf");
  var CL_mon = document.getElementById("CL_mon");

  document.getElementById('percent').innerHTML = document.getElementById("CL_inf").value;
  document.getElementById('percent1').innerHTML = document.getElementById("CL_inf").value;
  var CL_vl;
  var CL_type;
  var CL_real;
  var CL_tenure;
  CL_tenure = parseFloat(CL_time.value, 10);
  CL_tenure *= CL_fact;

  CL_current = parseFloat(CL_current.value, 10);
  CL_roi = parseFloat(CL_roi.value, 10) / 100;
  CL_inf = parseFloat(CL_inf.value, 10) / 100;
  CL_tax = parseFloat(CL_tax.value, 10) / 100;
  CL_roi = CL_roi * (1 - CL_tax);

  CL_mon = parseFloat(CL_mon.value, 10);
  if (CL_roi == 0) CL_roi = 0.00000001;
 
  CL_roi = Math.pow((1 + CL_roi), 1 / CL_fact) - 1;
  CL_vl = CL_current * (Math.pow((1 + CL_roi), CL_tenure));
  CL_vl += parseFloat(CL_mon, 10) * ((Math.pow((1 + CL_roi), CL_tenure) - 1) / CL_roi);
  CL_real = CL_vl / Math.pow(1 + CL_inf, CL_tenure / CL_fact);

  if (isNaN(CL_vl)) {
    alert('One or more of the numeric fields are wrong. Please Check');
  }
  else {
    if (document.layers) {
      document.getElementById("ans1").innerHTML = Math.round(CL_vl);
      document.getElementById("ans2").innerHTML = Math.round(CL_real);
    }
    else {
      document.getElementById("ans1").innerHTML = Math.round(CL_vl);
      document.getElementById("ans2").innerHTML = Math.round(CL_real);
    }
  }
}

var CL_viewHide;
if (document.layers) {
  visible = 'show';
  hidden = 'hide';
}
else if (document.all) {
  visible = 'visible';
  hidden = 'hidden';
}

function cl_check(fld, typ) {
  if (typ == "int") {
    if (isNaN(fld.value)) {
      fld.value = "";
      alert('Please enter a Number in the given field');
      fld.focus();
    }
  }
}

function CL_displayInflaction(viewShow) {
  if (document.layers) {
    content = document.layers[viewShow];
  }
  else if (document.all) {
    content = document.all(viewShow).style;
  }
  document.getElementById("result").style.display = "inline";
}

function CL_hidInflaction(viewShow) {
  if (document.layers) {
    content = document.layers[viewShow];
  }
  else if (document.all) {
    content = document.all(viewShow).style;
  }
  document.getElementById("result").style.display = "none";
  jQuery('.textbox1').val('');
}

function CL_validateInflaction(frm) {
  var CL_time = document.getElementById("CL_time");
  var CL_current = document.getElementById("CL_current");
  var CL_tax = document.getElementById("CL_tax");
  var CL_roi = document.getElementById("CL_roi");
  var CL_inf = document.getElementById("CL_inf");
  var CL_mon = document.getElementById("CL_mon");

  if (isNaN(parseFloat(CL_current.value)) || parseFloat(CL_current.value) < 0) {
    alert('Current savings should be greater than or equal to 0');
    CL_current.focus();
    return false;
  }
  if (isNaN(parseFloat(CL_mon.value)) || parseFloat(CL_mon.value) < 0) {
    alert('Expected Savings should be greater than or equal to 0');
    CL_mon.focus();
    return false;
  }
  if (isNaN(parseFloat(CL_roi.value)) || parseFloat(CL_roi.value) < 0) {
    alert('Return on your investments should be greater than or equal to 0');
    CL_roi.focus();
    return false;
  }
  if (parseFloat(CL_roi.value) > 100) {
    alert(' Please Enter valid Return on your investments');
    CL_roi.focus();
    return false;
  }
  if (isNaN(parseFloat(CL_time.value)) || parseFloat(CL_time.value) <= 0) {
    alert('Investment horizon should be greater than 0');
    CL_time.focus();
    return false;
  }
  if (isNaN(parseFloat(CL_tax.value)) || parseFloat(CL_tax.value) < 0) {
    alert(' Please Enter valid Tax rate');
    CL_tax.focus();
    return false;
  }
  if (parseFloat(CL_tax.value) > 100) {
    alert('Please enter Your Tax rate should be less than 100');
    CL_tax.focus();
    return false;
  }
  if (parseFloat(CL_inf.value) > 100) {
    alert(' Please Enter valid rate of inflation');
    CL_inf.focus();
    return false;
  }
  if (isNaN(parseFloat(CL_inf.value)) || parseFloat(CL_inf.value) < 0) {
    alert('Please enter rate of inflation');
    CL_inf.focus();
    return false;
  }
  return true;
}

function isNumberKey(evt) {
  var charCode = (evt.which) ? evt.which : event.keyCode
  if (charCode > 31 && (charCode < 48 || charCode > 57))
    return false;

    return true;
}

function isNumberKey1(evt) {
  var charCode = (evt.which) ? evt.which : event.keyCode
  if (charCode > 31 && (charCode < 46 || evt.keyCode == 47 || charCode > 57) && charCode != 190)
    return false;
}